// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
      void dfs(int i,int j,int n,int m,int vis[501][501],vector<vector<char>> &grid){
        if(i<0 || j<0)
            return;
        if(i>=n || j>=m)
            return;
        if(grid[i][j]=='0')
            return;
        if(!vis[i][j]){
            vis[i][j]=1;
            dfs(i-1,j,n,m,vis,grid);
            dfs(i+1,j,n,m,vis,grid);
            dfs(i,j-1,n,m,vis,grid);
            dfs(i,j+1,n,m,vis,grid);
            dfs(i-1,j-1,n,m,vis,grid);
            dfs(i-1,j+1,n,m,vis,grid);
            dfs(i+1,j-1,n,m,vis,grid);
            dfs(i+1,j+1,n,m,vis,grid);
        }
        
    }
    public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count=0;
       int vis[501][501];
       for(int i = 0;i<n;i++)
       {
           for(int j = 0;j<m;j++)
           {
               vis[i][j] = 0;
           }
       }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    dfs(i,j,n,m,vis,grid);
                    count++;
                }
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends