class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> st;

        for(int i=0; i<nums.size(); i++){
            int l=0,r=nums.size()-1, target=-1*nums[i];
            while(l < i && i < r){
                int sum=nums[l]+nums[r];
                if(sum < target) l++;
                else if(sum > target) r--;
                else {
                    st.insert({nums[l], nums[i], nums[r]});
                    l++;
                    r--;
                }
            }
        }

        vector<vector<int>> ans;
        for(auto to: st) ans.push_back(to);
        return ans;
     }
};