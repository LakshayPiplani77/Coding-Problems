class Solution
{
    public:
    int maxProduct(vector<string>& words)
    {
        vector<int> bitsets(words.size(), 0);
        
        int res = 0;
        for (int j=0; j<words.size(); j++)
        {
            for (char c: words[j])
                bitsets[j] = bitsets[j] | 1<<(c-'a');
            
            for (int i=0; i<j; i++)
                if ((bitsets[i] & bitsets[j]) == 0)
                    res = max (res, int(words[i].size() * words[j].size()));
        }
        return res;
    }
};