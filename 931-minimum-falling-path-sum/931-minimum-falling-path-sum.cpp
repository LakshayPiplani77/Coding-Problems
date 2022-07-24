class Solution {
private:
    int f(int i,int j,vector<vector<int>> &matrix,int m,vector<vector<int>> &dp)
    {
        if(j < 0 || j >= m)
            return 1e9;
        if(i == 0)
            return matrix[0][j];
        if(dp[i][j] != -1)
            return dp[i][j];
        int s = matrix[i][j] + f(i-1,j,matrix,m,dp);
        int ld = matrix[i][j] + f(i-1,j-1,matrix,m,dp);
        int rd = matrix[i][j] + f(i-1,j+1,matrix,m,dp);
        return dp[i][j] = min(s,min(ld,rd));
    }
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int ans = 1e9;
        vector<vector<int>> dp(n,vector<int> (m,-1));
        for(int j =0;j<m;j++)
        {
            ans = min(f(n-1,j,matrix,m,dp),ans);
        }
        return ans;
    }
};