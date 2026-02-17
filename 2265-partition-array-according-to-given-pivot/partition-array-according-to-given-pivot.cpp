class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans, v1, v2;
        int v3=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < pivot){
                v1.push_back(nums[i]);
            } else if(nums[i] > pivot){
                v2.push_back(nums[i]);
            } else{
                v3++;
            }
        }
        for(auto to: v1) ans.push_back(to);
        while(v3--) ans.push_back(pivot);
        for(auto to: v2) ans.push_back(to);
        return ans;
    }
};