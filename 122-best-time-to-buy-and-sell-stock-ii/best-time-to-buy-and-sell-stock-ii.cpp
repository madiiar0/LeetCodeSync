class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int dp[30100], mx[30100], ans=0;
        dp[0]=0;
        for(int i=1; i<=prices.size(); i++){
            dp[i]=0;
            for(int j=1; j<i; j++){
                dp[i]=max(dp[i], mx[j-1]+prices[i-1]-prices[j-1]);
            }
            mx[i]=max(mx[i-1], dp[i]);
            ans=max(ans, dp[i]);
        }
        return ans;
    }
};