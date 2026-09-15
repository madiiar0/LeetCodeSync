class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0, r=nums.size()-1;
        if(nums[0] == target) return 0;
        while(l+1<=r){
            int mid=(l+r)/2;
            if(nums[l] == target) return l;
            if(nums[r] == target) return r;
            if(l+1 == r) return -1;

            if(nums[mid] < nums[r]){
                if(nums[mid] <= target && target <= nums[r]) l=mid;
                else r=mid;
            } else{
                if(target <= nums[r] || nums[mid] <= target) l=mid;
                else r=mid;
            }
        }
        return -1;
    }
};