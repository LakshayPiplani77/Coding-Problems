class Solution {
public:
     int findDuplicate(vector<int>& nums) {
        
        vector<bool> found(1 + nums.size(), false);
        
        for (int i : nums) {
            if (found[i])
                return i;
            else
                found[i] = true;
        } 
        
        return -1;
    }
};