class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map<int,int> umap;
        priority_queue<pair<int,int>> pq;
        for(int i = 0;i<nums.size();i++)
        {
            umap[nums[i]]++;
        }
        for(auto it: umap)
        {
            pq.push({it.second,it.first});
        }
        while(k--)
        {
           ans.push_back(pq.top().second);
           pq.pop();
        }
        return ans;
    }
};