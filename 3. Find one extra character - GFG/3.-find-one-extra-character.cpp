// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

char extraChar(string s1, string s2)
{
    unordered_map<char,int> S1;
    for(int i = 0;i<s1.length();i++)
    {
        S1[s1[i]]++;
    }
    for(int i = 0;i<s2.length();i++)
    {
        S1[s2[i]]++;
    }
    char ans;
    for(auto &i: S1)
    {
        if(i.second == 1)
           ans = i.first;
    }
    return ans;
}

// { Driver Code Starts.
    
int main() {
	
        int t;
        cin>>t;
        while(t--) {
            string s1,s2;
            cin>>s1;
            cin>>s2;
            cout<<extraChar(s1, s2)<<endl;
        }
}  // } Driver Code Ends