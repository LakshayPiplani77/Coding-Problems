class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int ele = nums[0];
        for(int i = 1;i<n;i++)
        {
            ele = ele ^ nums[i];
        }
        return ele;
    }
};