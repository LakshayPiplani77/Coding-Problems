class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
        int n = prices.size();
        for(int i = 0;i<n;i++)
        {
            int finalPrice = prices[i];
            int mini = 0;
            for(int j = i+1;j<n;j++)
            {
                if(prices[i] >= prices[j])
                {
                    mini = prices[j];
                    // cout<<mini<<" ";
                    break;
                }
            }
            finalPrice = prices[i] - mini;
            ans.push_back(finalPrice);
        }
        return ans;
    }
};