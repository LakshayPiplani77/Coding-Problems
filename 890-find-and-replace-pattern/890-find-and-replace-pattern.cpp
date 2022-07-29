class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        int n = words.size();
        vector<string> res;
        for(int i = 0; i < n; i++) {
            bool ok = true;
            string s = words[i];
            if(s.size() != pattern.size()) continue;
            vector<int> idxp(26, -1), idxs(26, -1);
            for(int j = 0; j < s.size(); j++) {
                if(idxp[pattern[j]-'a'] != idxs[s[j]-'a']) ok = false;
                idxp[pattern[j]-'a'] = j;
                idxs[s[j]-'a'] = j;
            }
            if(ok) res.push_back(s);
        }
        return res;
    }
};