class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        while(left < right){
            while (nums[left] % 2 == 0 && left < right){
                left++;
            }
            while (nums[right] % 2 == 1 && left < right){
                right--;
            }
            if(left<right){
                swap(nums[left],nums[right]);
                left++;
                right--;
            }
        }
        return nums;
    }
};