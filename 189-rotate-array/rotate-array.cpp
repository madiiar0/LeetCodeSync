class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> res;
        k = k % nums.size();
        for(int i=nums.size()-k; i<=nums.size()-1; i++){
            res.push_back(nums[i]);
        }
        for(int i=0; i<nums.size()-k; i++){
            res.push_back(nums[i]);
        }
        nums.clear();
        for(auto to: res) nums.push_back(to);
    }
};