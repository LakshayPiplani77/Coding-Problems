class Solution {
private:
    int f(int i,int j,vector<vector<int>> &dp)
    {
        //if you reach the 0,0 ie. grid[0][0] goal state return 1
        if(i == 0 && j == 0)
            return 1;
        // if robot exceeds boundary return 0
        if(i<0 || j < 0)
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        //now from bottom you have two moves up and left (opposite of if you have started from top )
        int up = f(i-1,j,dp);
        int left = f(i,j-1,dp);
        return dp[i][j] = up+left;
    }
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int> (n,0));
        //start from end and come to top i.e start from grid[m - 1][n - 1] and 
        //goal is grid[0][0] thats why start with m-1,n-1
        dp[0][0] = 1;
        for(int i = 0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(i == 0 && j == 0)
                    continue;
                else{
                    int up = 0,left = 0;
                    if(i>0) up = dp[i-1][j];
                    if(j>0) left = dp[i][j-1];
                    dp[i][j] = up+left;                }
            }
            
        }
        return dp[m-1][n-1];
    }
};