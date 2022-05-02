class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> oddIndices;
        vector<int> evenIndices;
        int n = nums.size();
        for(int i = 0;i<nums.size();i++)
        {
            if(i & 1)
                oddIndices.push_back(nums[i]);
            else
                evenIndices.push_back(nums[i]);
        }
        sort(oddIndices.begin(),oddIndices.end(),greater<int>());
        sort(evenIndices.begin(),evenIndices.end());
        for(int i=0,k=0;i<n;i+=2) 
            nums[i]=evenIndices[k++];
        for(int i=1,k=0;i<n;i+=2) 
            nums[i]=oddIndices[k++];
    return nums;
    }
};