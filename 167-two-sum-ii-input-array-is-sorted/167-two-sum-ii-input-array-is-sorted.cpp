class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low = 0;
        int high = numbers.size()-1;
        while(low < high)
        {
            int sum = numbers[low] + numbers[high];
            if(sum == target)
                break;
            if(sum > target)
                high--;
            if(sum < target)
                low++;
        }
       return {low+1,high+1};
        
    }
};