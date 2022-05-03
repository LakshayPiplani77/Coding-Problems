class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> temp;
        for(int i = 0;i<nums.size();i++)
        {
            temp.push_back(nums[i]);
        }
        sort(temp.begin(),temp.end());
        int start = 0;
        while(start < nums.size() && nums[start] == temp[start])
        {
            start++;
        }
        int end = nums.size()-1;
        while(end >= 0 && nums[end] == temp[end])
        {
            end--;
        }
        if(start<end)
            return end-start+1;
        else
            return 0;
    }
};