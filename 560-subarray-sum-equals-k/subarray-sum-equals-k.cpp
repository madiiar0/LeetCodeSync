class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> mp;
        int pref=0,ans=0;
        mp[0]=1;
        for(int i=0; i<nums.size(); i++){
            pref+=nums[i];
            if(mp.count(pref-k) > 0){
                ans+=mp[pref-k];
            }
            mp[pref]++;
        }
        return ans;
    }
};