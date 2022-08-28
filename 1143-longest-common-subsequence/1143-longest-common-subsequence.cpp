class Solution {
private:
    int lcs(int ind1,int ind2,string &s1,string &s2,vector<vector<int>> &dp)
    {
        if(ind1 == 0 || ind2 == 0)
            return 0;
        if(dp[ind1][ind2] != -1)
            return dp[ind1][ind2];
        //match
        if(s1[ind1-1] == s2[ind2-1])
            return dp[ind1][ind2] =  1 + lcs(ind1-1,ind2-1,s1,s2,dp);
        //no match
        return dp[ind1][ind2] = 0 + max(lcs(ind1-1,ind2,s1,s2,dp),lcs(ind1,ind2-1,s1,s2,dp));
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
        int l1 = text1.size();
        int l2 = text2.size();
        vector<vector<int>> dp(l1+1,vector<int> (l2+1,-1));
        return lcs(l1,l2,text1,text2,dp);
    }
};