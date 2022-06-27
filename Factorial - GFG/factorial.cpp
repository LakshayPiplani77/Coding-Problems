// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
private:
    long long int f(int n,vector<long long int> & dp)
    {
      if(n<=1)
      return n;
      if(dp[n] != -1)
      return dp[n];
      return dp[n] = n*f(n-1,dp);
        
    }
public:
    long long int factorial(int N){
        //code here
        if( N==0 || N == 1)
        return 1;
        vector<long long int> dp(N+1,-1);
        return f(N,dp);
        
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.factorial(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends