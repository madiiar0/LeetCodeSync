class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size() == 1){
            if(nums[0] != 1) return 1;
            else return 2;
        }
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1] <= 0 && nums[i] <= 0) continue;
            else if(nums[i-1] <= 0){
                if(nums[i] != 1) return 1;
            }
            else if(i == 1 && nums[i-1] != 1) return 1;
            else if(abs(nums[i]-nums[i-1]) > 1){
                return nums[i-1]+1;
            }
        }
        if(nums[nums.size()-1] <= 0) return 1;
        else return nums[nums.size()-1]+1;
    }
};