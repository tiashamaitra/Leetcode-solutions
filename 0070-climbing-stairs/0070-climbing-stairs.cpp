class Solution {
public:
    int climbStairs(int n) {
        vector<int>dp(n+1,0);
        int i;
        dp[1]=1; //dp[i]= no of ways to reach the ith floor from start
        dp[0]=1;
        for(i=2;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
            
        }
        return dp[n];
    }
};