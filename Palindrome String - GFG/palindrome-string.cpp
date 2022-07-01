// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	string reverse(int len,string S)
	{
	    int start = 0;
	    int end = len-1;
	    while(start < end)
	    {
	        swap(S[start],S[end]);
	        start++;
	        end--;
	    }
	    return S;
	}
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int len = S.size();
	    string t = reverse(len,S);
	    if(t == S)
	    return 1;
	    else
	    return 0;
	    
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