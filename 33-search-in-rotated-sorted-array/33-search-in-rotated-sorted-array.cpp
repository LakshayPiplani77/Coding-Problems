class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        
        while(low <= high){
            int mid = low + (high - low) / 2;
            
            if(nums[mid] == target){
                return mid;
            }
            
            // if low is less than mid (not less or equal because equal is handled by the previous if statement), then low to mid is sorted
            if (nums[low] <= nums[mid]){
                // if target is between low to mid,
                // narrow search down to low to mid
                if(target >= nums[low] and target <= nums[mid]){
                    high = mid;
                } else {
                    // if target is beyond mid
                    // narrow search down to mid + 1 to high
                    low = mid + 1;
                }
                // if low is greater than mid,
                // then we're in the rotated part
            } else if (nums[low] > nums[mid]){
                // if target is between mid to high
                // narrow search down to mid to high
                if(target >= nums[mid] and target <= nums[high]){
                    low = mid + 1;
                } else {
                    // if target is greater than high and mid both
                    // narrow search down to the second part before
                    // mid. So low to mid.
                    high = mid;
                }
            }
        }
        
        return -1;
    }
};