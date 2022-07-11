// { Driver Code Starts
//Initial Template for C++


// CPP program to generate power set
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++


//Function to return the lexicographically sorted power-set of the string.
void solve(int index,string ans,vector<string> &result,string s,int n)
{
    if(index == n)
    {
        result.push_back(ans);
        return;
    }
    //take
    ans.push_back(s[index]);
    solve(index+1,ans,result,s,n);
    //not take
    ans.pop_back();
    solve(index+1,ans,result,s,n);
}
vector <string> powerSet(string s)
{
   //Your code here
   vector<string> result;
   string ans = "";
   int n = s.length();
   solve(0,ans,result,s,n);
   return result;
   
   
}


// { Driver Code Starts.


// Driver code
int main()
{
    int T;
    cin>>T;//testcases
    while(T--)
    {
        string s;
        cin>>s;//input string
        
        //calling powerSet() function
        vector<string> ans = powerSet(s);
        
        //sorting the result of the powerSet() function
        sort(ans.begin(),ans.end());
        
        //printing the result
        for(auto x:ans)
        cout<<x<<" ";
        cout<<endl;
        
        
    }

return 0;
}   // } Driver Code Ends