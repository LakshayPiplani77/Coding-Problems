class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0;
        for(int i = 0;i<nums.size();i++)
        {
            int curr = 0;
            for(int j = i;j<nums.size();j++)
            {
                if(nums[j] == 1)
                    curr++;
                else
                    break;
            }
            res = max(res,curr);
        }
        return res;
    }
};