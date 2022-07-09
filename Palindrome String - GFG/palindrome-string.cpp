// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int check(string &s, int start,int end)
	{
	    if(s.size() == 0 || s.size() == 1)
	    return 1;
	    if(start >= end)
	    return 1;
	    if(s[start] != s[end])
	    return 0;
	    return check(s,start+1,end-1);
	}
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int ans = check(S,0,S.length()-1);
	    return ans;
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