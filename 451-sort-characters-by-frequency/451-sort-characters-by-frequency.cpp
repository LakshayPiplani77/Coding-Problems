class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        string ans = "";
        for(int i = 0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto i: mp)
        {
            pq.push({i.second,i.first});
        }
        while(!pq.empty())
        {
            int n = pq.top().first;
            while(n--)
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};