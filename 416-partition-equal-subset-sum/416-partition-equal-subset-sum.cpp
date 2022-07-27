class Solution {
    bool solve(int index,int target,vector<int> &nums,vector<vector<int>> &dp)
    {
        if(target == 0)
            return 0;
        if(index == 0)
           return nums[0] == target;
        if(dp[index][target] != -1)
            return dp[index][target];
        bool nottake = solve(index-1,target,nums,dp);
        bool take = false;
        if(target >= nums[index])
            take = solve(index-1,target-nums[index],nums,dp);
        return dp[index][target] = take || nottake;
        
    }
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(auto it : nums)
        {
            sum += it;
        }
        if(sum % 2 != 0)
            return false;
        vector<vector<int>> dp(n,vector<int> (sum,-1));
        return solve(n-1,sum/2,nums,dp);
    }
};