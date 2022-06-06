// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function Template for C++


class Solution{
  public:
    int countVowels(string str){
        
       //Your code here
       int count = 0;
       unordered_set<char> st (str.begin(),str.end());
       for(char x: st)
       {
           if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
           count++;
       }
        return count;
    }
};

// { Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{

	string s;
	cin >> s;
	Solution obj;
	cout << obj.countVowels(s) << endl;
	
	}
	return 0;
	
}

  // } Driver Code Ends