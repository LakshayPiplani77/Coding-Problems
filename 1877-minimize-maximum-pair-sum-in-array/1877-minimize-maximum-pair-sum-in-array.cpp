class Solution {
public:
    int minPairSum(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low < high)
        {
            ans.push_back(nums[low] + nums[high]);
            low++;
            high--;
        }
        int maxi = INT_MIN;
        for(int i = 0;i<ans.size();i++)
        {
            if(ans[i] > maxi)
                maxi = ans[i];
        }
        return maxi;
    }
};