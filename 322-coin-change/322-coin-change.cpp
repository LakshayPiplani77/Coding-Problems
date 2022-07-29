class Solution {
private:
    long long minCoins(int index,int amount,vector<int> &coins,vector<vector<int>> &dp)
    {
        if(index == 0)
        {
            if(amount % coins[index] == 0)
                return amount/coins[index];
            else
                return 1e9;
        }
        if(dp[index][amount] != -1)
            return dp[index][amount];
       long long nottake = 0 + minCoins(index-1,amount,coins,dp);
        long long take = 1e9;
        if(coins[index] <= amount)
        {
            take = 1  + minCoins(index,amount-coins[index],coins,dp);
        }
        return dp[index][amount] = min(take,nottake);
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n,vector<int> (amount+1,-1));
        int ans = minCoins(n-1,amount,coins,dp);
        if(ans >= 1e9)
            return -1;
        return ans;
        
    }
};