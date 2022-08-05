class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i] == 0)
                nums[i] = -1;
        }
        unordered_map<int,int> mp;
        int prefixSum = 0,res = 0;
        for(int i = 0;i<nums.size();i++)
        {
            prefixSum += nums[i];
            if(prefixSum == 0)
                res = i+1;
            if(mp.find(prefixSum) == mp.end())
                mp.insert({prefixSum,i});
            if(mp.find(prefixSum) != mp.end())
                res = max(res,i-mp[prefixSum-0]);
                
        }
        return res;
    }
};