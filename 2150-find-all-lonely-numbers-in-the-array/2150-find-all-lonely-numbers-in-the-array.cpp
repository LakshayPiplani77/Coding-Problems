class Solution
{
public:
    vector<int> findLonely(vector<int> &nums)
    {
        unordered_map<int, int> m;

        for (auto i : nums)
        {
            m[i]++;
        }
        vector<int> res;
        for (auto i : m)
        {
            if (m.find(i.first + 1) == m.end() and m.find(i.first - 1) == m.end() and (i.second == 1))
            {
                res.push_back(i.first);
            }
        }
        return res;
    }
};