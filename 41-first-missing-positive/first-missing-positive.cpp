typedef long long ll;
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<ll> st;
        st.insert(0);
        for(auto to: nums){
            if(to <= 0) continue;
            st.insert(to);
        }

        ll mn=1e9;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] <= 0ll) continue;
            if(st.find(nums[i]-1ll) == st.end()){
                mn=min(mn, nums[i]-1ll);
            }
            if(st.find(nums[i]+1ll) == st.end()){
                mn=min(mn, nums[i]+1ll);
            }
        }
        if(mn == 1e9 || st.find(1) == st.end()) return 1;
        return mn;
    }
};