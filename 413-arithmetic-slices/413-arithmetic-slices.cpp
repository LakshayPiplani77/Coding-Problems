class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& arr) {
        int n = arr.size(); // extracting the size of the array
        
        if(n < 3)  // if size is less than 3
        {
            return 0; // then simply return 0
        }
        
        int ans = 0, curr = 0; // declaring variables
        
        // for the first part
        // it stores what is the difference of last consecutive elements
        int last_diff = arr[1] - arr[0];
        
        // start traversing from the array
        for(int i = 1; i < n - 1; i++)
        {
            // for any index what is the current difference
            int curr_diff = arr[i + 1] - arr[i];
            
            // if current difference is equal to the last difference
            if(curr_diff == last_diff)
            {
                curr++; // increase current variable
            }
            else // but if not, give current difference to last difference
            {
                last_diff = curr_diff;
                curr = 0; // and make curr to zero, as we have to do a new start
            }
            
            ans = ans + curr; // add current to our answer
        }
        
        return ans; // finally return the answer
    }
};