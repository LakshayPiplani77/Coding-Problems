// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
     int required_coin(int n,int curr[]){
       
       if(n>=2000)
           return 2000;
       for(int i=0;i<10;i++){
           if(n>=curr[i]){
               return curr[i];
           }
       }
   }
   vector<int> minPartition(int N)
   {
       // code here
       int curr[] = {2000,500,200,100,50,20,10,5,2,1};
       vector<int> ans;
       while(N>0){
           int coin = required_coin(N,curr);
           N-=coin;
           ans.push_back(coin);
       }
       return ans;
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends