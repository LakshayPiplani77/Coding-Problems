class Solution {
private:
    int f(int i,int j,vector<vector<int>> &dp)
    {
        if(i == 0 || j == 0)
            return 1;
        if(i<0 || j < 0)
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        int up = f(i-1,j,dp);
        int left = f(i,j-1,dp);
        return dp[i][j] = up + left;
    }
public:
    int uniquePaths(int m, int n) {
        vector<int> prev(n,0);
        for(int i = 0;i<m;i++)
        {
            vector<int> curr(n,0);
            for(int j = 0;j<n;j++)
            {
                if(i== 0 && j == 0)
                    curr[j] = 1;
                else{
                int up = 0,left = 0;
                if(i>0)
                    up = prev[j];
                if(j>0)
                    left = curr[j-1];
                curr[j] = up+left;
                }
                
            }
            prev = curr;
        }
        return prev[n-1];
    }
};