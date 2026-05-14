class Solution {
public:
    bool validPalindrome(string s) {
        int l=0,r=s.size()-1;
        bool del=0,ans=true;
        while(l<r){
            if(s[l] == s[r]){
                l++;
                r--;
                continue;
            }
            if(del){
                ans=false;
                break;
            }
            del=true;
            if(s[l] == s[r-1]) r--;
            else if(s[l+1] == s[r]) l++;
        }
        if(ans) return true;
        l=0,r=s.size()-1;
        del=0;
        while(l<r){
            if(s[l] == s[r]){
                l++;
                r--;
                continue;
            }
            if(del){
                return false;
            }
            del=true;
            if(s[l+1] == s[r]) l++;
            else if(s[l] == s[r-1]) r--;
        }
        return true;
    }
};