#include<unordered_map>
#include<math.h>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans = -1;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto i: mp){
            if(i.second > floor(n/2))
                ans = i.first;
        }
        return ans;
    }
};