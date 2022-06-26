// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  private:
  void solve(int index,int B, vector<int> &A,vector<vector<int>> &ans,vector<int> &ds)
  {
      if(index == A.size())
      {
          if(B == 0)
          ans.push_back(ds);
         return;
      }
      //pickup the element
      if(A[index] <= B)
      {
          ds.push_back(A[index]);
          solve(index,B-A[index],A,ans,ds);
          ds.pop_back();
      }
      //dont pick
      solve(index+1,B,A,ans,ds);
  }
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        vector<vector<int>> ans;
        vector<int> ds;
       set<int> s(A.begin(),A.end());
        A.assign(s.begin(),s.end());
        solve(0,B,A,ans,ds);
        sort(ans.begin(),ans.end());
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
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	  // } Driver Code Ends