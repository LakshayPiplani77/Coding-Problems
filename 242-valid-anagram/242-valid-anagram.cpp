class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> count;
        for(int i = 0;i<s.length();i++)
        {
            count[s[i]]++;
        }
        for(int i = 0;i<t.length();i++)
        {
            count[t[i]]--;
        }
        for(auto i: count)
        {
            if(i.second != 0)
                return false;
        }
        return true;
    }
};