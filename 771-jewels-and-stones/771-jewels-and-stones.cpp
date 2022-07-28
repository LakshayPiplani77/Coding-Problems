class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<int,int> mp;
        for(int i = 0;i<jewels.size();i++)
        {
            mp[jewels[i]]++;
        }
        int count = 0;
        for(int i = 0;i<stones.size();i++)
        {
            for(auto x: mp)
            {
                if(x.first == stones[i])
                    count++;
            }
        }
        return count;
    }
};