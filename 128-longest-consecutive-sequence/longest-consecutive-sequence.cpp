class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> a;
        for(auto to: nums){
            if(a.empty() || a.back() != to) a.push_back(to);
        }
        bool tf=0;
        int ans=0, mx=(nums.size() > 0);
        for(int i=1; i<a.size(); i++){
            if(a[i] == a[i-1]+1 && tf){
                ans++;
            } else if(a[i] != a[i-1]+1 && tf){
                mx=max(mx, ans);
                ans=0;
                tf=false;
            } else if(a[i] == a[i-1]+1 && !tf){
                ans=2;
                tf=true;
            }
        }
        mx=max(mx, ans);
        return mx;
    }
};