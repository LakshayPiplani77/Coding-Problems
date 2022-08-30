class Solution {
private:
  int f(string &str1,string &str2,int i,int j,vector<vector<int>> &dp)
{
    if(i == 0)
        return j;
    if(j == 0)
        return i;
    if(dp[i][j] != -1)
        return dp[i][j];
    if(str1[i-1] == str2[j-1])
        return dp[i][j] = 0 + f(str1,str2,i-1,j-1,dp);
    else
    {
       return dp[i][j] = min(1+f(str1,str2,i,j-1,dp),min(1+f(str1,str2,i-1,j,dp),1+f(str1,str2,i-1,j-1,dp)));
    }
}
public:
    int minDistance(string str1, string str2) {
    int n = str1.length();
    int m = str2.length();
    vector<vector<int>> dp(n+1,vector<int> (m+1,-1));
    return f(str1,str2,n,m,dp);
    }
};