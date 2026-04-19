class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int dp[30100], mx[30100], ans=0, prev=-1e9;
        dp[0]=0;
        for(int i=1; i<=prices.size(); i++){
            dp[i]=max(0, prev+prices[i-1]);
            mx[i]=max(mx[i-1], dp[i]);
            prev=max(prev, mx[i-1]-prices[i-1]);
            ans=max(ans, dp[i]);
        }
        return ans;
    }
};