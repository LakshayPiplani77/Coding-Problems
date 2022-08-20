class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            // if target is present at middle return mid index
            if(nums[mid] == target)
                return mid;
            // left side is sorted
            if(nums[low] <= nums[mid])
            {
    //if target is in range from low to mid i.e in left half narrow down the search to left half only

                if(target >= nums[low] && target <= nums[mid])
                    high = mid-1;
    // target is not in the low to mid range explore the right half it may have the target value

                else 
                    low = mid+1;
            }
//right half is sorted 
            else
            {
        //if target is in range from mid to high i.e right half narrow down the search to right half only

                if(target >= nums[mid] && target <= nums[high])
                    low = mid+1;
        //target is not in mid to high range explore left half it may have the target value

                else
                    high = mid-1;
            }
        }
    //element not present in the array at all

        return -1;
    }
};