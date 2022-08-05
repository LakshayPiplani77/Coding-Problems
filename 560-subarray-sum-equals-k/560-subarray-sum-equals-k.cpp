class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int preSum = 0, cnt = 0;
        for(int x: nums) {
            preSum += x;
            if(preSum == k)
                cnt++;
            if(mp.find(preSum-k) != mp.end())
                cnt += mp[preSum-k];
            mp[preSum]++;
        }
        
        return cnt;
    }
};