class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> mp;
        for(auto i: s)
        {
            mp[i]++;
        }
        for(auto j: t)
        {
            mp[j]--;
        }
        int ans = 0;
        for(auto i: s)
        {
            if(mp[i] > 0)
            {
                ans  += mp[i];
                mp[i] = 0;
            }
        }
        return ans;
    }
};