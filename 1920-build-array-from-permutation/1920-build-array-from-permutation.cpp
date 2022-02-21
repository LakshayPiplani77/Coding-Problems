class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0;i<nums.size();i++){
            int result = nums[nums[i]];
            ans.push_back(result);
        }
        return ans;
    }
};