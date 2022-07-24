class Solution {
private:
    int bs(int start,int end,vector<int> &nums,int target)
    {
        if(start > end)
            return -1;
        int mid = start + (end-start)/2;
        if(nums[mid] == target)
            return mid;
        else if(nums[mid] < target)
            return bs(mid+1,end,nums,target);
        else 
            return bs(start,mid-1,nums,target);
        return -1;
    
        
    }
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0,end = n-1;
        return bs(start,end,nums,target);
    }
};