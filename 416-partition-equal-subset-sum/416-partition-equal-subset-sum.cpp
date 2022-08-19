class Solution {
private:
    bool f(vector<int> &nums,int index,int target,vector<vector<int>> &dp)
    {
        if(target == 0)
            return true;
        if(index == 0)
            return nums[index] == target;
        if(dp[index][target] != -1)
            return dp[index][target];
        bool nottake = f(nums,index-1,target,dp);
        bool take = false;
        if(nums[index] <= target)
        {
            take = f(nums,index-1,target-nums[index],dp);
        }
        return dp[index][target]  = take || nottake;
    }
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++)
            sum += nums[i];
        if(sum %2 != 0)
            return false;
        else{
        int target = sum/2;
        vector<vector<int>> dp(n,vector<int> (target+1,-1));
        return f(nums,n-1,target,dp);
        }
    }
};