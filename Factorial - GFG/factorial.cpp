// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    long long int factorial(int N){
        //code here
        if(N == 0 || N == 1)
        return 1;
        long long int dp[N+1];
        dp[0] = 1;
        dp[1] = 1;
        for(long long int i = 2;i<=N;i++){
            dp[i] = i*dp[i-1];
        }
        return dp[N];
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