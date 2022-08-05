class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> mh;
        int n = nums.size();
        for(int i = 0;i<k;i++)
        {
            mh.push(nums[i]);
        }
        for(int i = k;i<n;i++)
        {
            if(nums[i] > mh.top())
            {
                mh.pop();
                mh.push(nums[i]);
            }
        }
        return mh.top();
    }
};