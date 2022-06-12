class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();

    vector<int> color(n , 0);  // initially all are marked with '0' color
    
    for(int i=0; i<n; i++)
    {
        if(!color[i])
        {
            queue<int> q;
            q.push(i);
            
            color[i]=1;
            
            while(!q.empty())
            {
                int node = q.front();
                q.pop();
                for(auto it:graph[node])
                {
                    if(!color[it])  // checking if it is not colored
                    {
                        color[it] = -color[node];  // coloring in either in -1 or 1
                        q.push(it);
                    }
                    else if(color[it]==color[node])  // checking if it is already color and is color same as its adjecent
                        return false;
                }
            }
        }
    }
    return true;
    }
};