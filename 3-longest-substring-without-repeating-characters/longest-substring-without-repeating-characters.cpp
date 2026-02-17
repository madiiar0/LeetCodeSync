class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        map<char, int> mp;
        mp[s[l]]++;
        int ans=0;
        while(l < s.size() && r < s.size()){
            ans=max(ans, r-l+1);
            if(r+1 < s.size() && mp[s[r+1]] == 0){
                r++;
                mp[s[r]]++;
            } else {
                mp[s[l]]--;
                l++;
            }
        }
        return ans;
    }
};