// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  private:
    long long int memo(long long int n,vector<long long int> &dp){
        if(n <= 1)
        return n;
        if(dp[n] != -1)
        return dp[n];
    return dp[n] = (memo(n-1,dp)%1000000007 + memo(n-2,dp)%1000000007)%1000000007;
    }
  public:
    long long int nthFibonacci(long long int n){
        // code here
        vector<long long int> dp(n+1,-1);
        return memo(n,dp);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends