class Solution {
private:
    int f(int index,int buy,vector<int> &prices, vector<vector<int>> &dp)
    {
        if(index >= prices.size())
            return 0;
        int profit = 0;
        if(dp[index][buy] != -1)
            return dp[index][buy];
        if(buy)
        {
            profit = max(-prices[index] + f(index+1,0,prices,dp), 0 + f(index+1,1,prices,dp));
        }
        else
        {
            profit = max(prices[index] + f(index+2,1,prices,dp), 0 + f(index+1,0,prices,dp));
        }
        return dp[index][buy] = profit;
    }
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n,vector<int> (2,-1));
        return f(0,1,prices,dp);
    }
};