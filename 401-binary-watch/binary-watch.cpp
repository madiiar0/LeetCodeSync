class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> v;
        for(int h=0; h<=11; h++){
            for(int m=0; m<=59; m++){
                int cnt_h=__builtin_popcount(h);
                int cnt_m=__builtin_popcount(m);
                if(cnt_h + cnt_m == turnedOn){
                    string t="";
                    t+=to_string(h);
                    t+=":";
                    if(m < 10) t+="0";
                    t+=to_string(m);
                    v.push_back(t);
                }
            }
        }
        return v;
    }
};