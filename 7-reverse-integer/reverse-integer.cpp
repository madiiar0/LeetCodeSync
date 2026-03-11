class Solution {
public:
    int reverse(long long x) {

        long long a=abs(x);
        string s = to_string(a);
        std::reverse(s.begin(), s.end());
        long long ans = stoll(s);
        if(x > 0 && ans >= (1ll<<31ll)) return 0;
        if(x < 0 && ans > (1ll<<31ll)) return 0;
        if(x < 0) ans*=-1;
        return (int)ans;
    }
};