class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int,int> mp;
        for(int i = 0;i<ransomNote.size();i++)
        {
            mp[ransomNote[i]]++;
        }
        for(int j = 0;j<magazine.size();j++)
        {
            mp[magazine[j]]--;
        }
        for(int i = 0;i<ransomNote.size();i++)
        {
            if(mp[ransomNote[i]] > 0)
                return false;
        }
        return true;
    }
};