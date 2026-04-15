#define f first
#define s second

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair<string, int>> a;
        for(int i=0; i<strs.size(); i++){
            string t=strs[i];
            sort(t.begin(), t.end());
            a.push_back({t, i});
        }
        sort(a.begin(), a.end());

        vector<vector<string>> ans;

        int p=0;
        vector<string> sq;
        sq.push_back(strs[a[0].s]);
        for(int i=1; i<a.size(); i++){
            if(a[p].f != a[i].f){
                ans.push_back(sq);
                p=i;
                sq.clear();
            }
            sq.push_back(strs[a[i].s]);
        }
        if(!sq.empty()) ans.push_back(sq);
        return ans;
    }
};