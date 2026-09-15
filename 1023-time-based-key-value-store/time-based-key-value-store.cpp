class TimeMap {
private:
    unordered_map<string, vector<pair<string, int>>> mp;

public:
    TimeMap() {}

    void set(string key, string value, int timestamp) {
        mp[key].push_back({value, timestamp});
    }
    
    string get(string key, int timestamp) {
        int l=0, r=mp[key].size()-1, res=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(mp[key][mid].second <= timestamp){
                l=mid+1;
                res=mid;
            } else r=mid-1;
        }
        if(res == -1) return "";
        else return mp[key][res].first;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */