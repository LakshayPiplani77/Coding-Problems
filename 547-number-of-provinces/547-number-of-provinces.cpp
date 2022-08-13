class Solution {
public:
    
    void dfs(vector<int>& vis,vector<int> adj[],int src){
        
        vis[src]=true;
        
        for(auto x:adj[src]){
            
            if(!vis[x])
                dfs(vis,adj,x);
        }
    }
    
    int findCircleNum(vector<vector<int>>& grid) {
        
        int n = grid.size();
		vector<int> vis(n, 0);
		vector<int> adj[n];

		// conversion of matrix into adjacent list.
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)  {
                
				if (grid[i][j] == 1) {
					adj[i].push_back(j);
				}
			}
		}
        
        int count=0;
        
        for(int i=0;i<n;i++){
            
            if(!vis[i]){
                dfs(vis,adj,i);
                count++;
            }
                
        }
        return count;
        
        
    }
};