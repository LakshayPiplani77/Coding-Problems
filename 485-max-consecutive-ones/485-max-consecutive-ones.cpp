class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int i = 0;
        int maxCount = -1e9;
        while(i != n)
        {
            if(nums[i] == 1)
            {
                count++;
                
            }
            if(nums[i] == 0)
                count = 0;
            maxCount = max(maxCount,count);
            i++;
        }
        return maxCount;
    }
};