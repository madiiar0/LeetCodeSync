#define f first
#define s second
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        vector<pair<int, int>> v;
        for(auto to: mp){
            v.push_back({to.s, to.f});
        }
        sort(v.begin(), v.end(), greater<pair<int, int>>());

        vector<int> ans;
        for(int i=0; i<k; i++) ans.push_back(v[i].s);
        return ans;
    }
};