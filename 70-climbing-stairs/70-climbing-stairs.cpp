class Solution {
private:
    int climbStairsHelper(int n,vector<int> &dp)
    {
        if(n == 0)
            return 1;
        if(n == 1)
            return 1;
        if(dp[n] != -1)
            return dp[n];
        int left = climbStairsHelper(n-1,dp);
        int right = climbStairsHelper(n-2,dp);
        return dp[n] = left + right;
    }
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return climbStairsHelper(n,dp);
    }
};