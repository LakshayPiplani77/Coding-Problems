// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
private:
int solve(int i, string &s)
{
    if(i>= s.size()/2)
     return 1;
    if(s[i] != s[s.size()-i-1])
      return 0;
    return solve(i+1,s);
}
public:	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    return solve(0,S);
	}

};

// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends