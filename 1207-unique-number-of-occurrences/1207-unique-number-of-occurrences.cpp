class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i = 0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        unordered_set<int> s;
        for(auto i: mp)
        {
            if(s.count(i.second) > 0)
                return false;
            else
                s.insert(i.second);
        }
        return true;
    }
};