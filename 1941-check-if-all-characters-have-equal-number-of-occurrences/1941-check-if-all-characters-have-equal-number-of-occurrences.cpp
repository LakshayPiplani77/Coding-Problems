class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> count;
        for(int i = 0;i<s.length();i++)
        {
            count[s[i]]++;
        }
        vector<int> ans;
        for(auto i: count)
        {
            ans.push_back(i.second);
        }
        for(int i = 1;i<ans.size();i++)
        {
            if(ans[i] != ans[i-1])
                return false;
        }
        return true;
    }
};