typedef long long ll;
class Solution {
public:
    int N=1e5+1;
    int firstMissingPositive(vector<int>& nums) {
        vector<bool> used(N);
        for(int i=0; i<nums.size(); i++){
            if(nums[i] <= 0 || nums[i] > 1e5) continue; 
            used[nums[i]]=true;
        }
        for(int i=1; i<=nums.size()+1; i++){
            if(used[i]) continue;
            return i;
        }
        return 0;
    }
};