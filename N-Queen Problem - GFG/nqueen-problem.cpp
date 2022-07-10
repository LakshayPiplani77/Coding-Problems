// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

   bool isSafe(int row,int col,int n,vector<vector<int>> &board){
       
       //leftwards
       int drow=row,dcol=col;
       while(col>=0){
           if(board[row][col]==1) return false;
           col--;
       }
       
       //Upwards Left Diagonal
       row=drow;col=dcol;
       while(col>=0 and row>=0){
           if(board[row][col]==1) return false;
           col--;
           row--;
       }
       
       //Downwards Left Diagonal
       row=drow;col=dcol;
       while(col>=0 and row<n){
           if(board[row][col]==1) return false;
           col--;
           row++;
       }
       
       return true;
   }

   void nqueenHelper(int col,vector<vector<int>> &ans,vector<int> &arr,int n,
   vector<vector<int>> &board){
       
       if(col == n){
           ans.push_back(arr);
           return;
       }
       
       for(int row=0;row<n;row++){
           
           if(isSafe(row,col,n,board) and board[row][col]==0){
               
               arr.push_back(row+1);
               board[row][col] = 1;
               nqueenHelper(col+1,ans,arr,n,board);
               board[row][col] = 0;
               arr.pop_back();
               
           }
       }
   }

   vector<vector<int>> nQueen(int n) {
       vector<vector<int>> board(n,vector<int>(n,0));
       vector<vector<int>> ans;
       vector<int> arr;
       nqueenHelper(0,ans,arr,n,board);
       return ans;
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends