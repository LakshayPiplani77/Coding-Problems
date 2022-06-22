// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to remove pair of duplicates from given string using Stack.
    string removePair(string str)
    {
        stack<char> st;
        stack<char> rev;
        for(auto i: str)
        {
            if(st.empty() || st.top() != i)
               st.push(i);
            else if(st.top() == i)
                st.pop();
        }
        string ans;
        while(!st.empty())
        {
            rev.push(st.top());
            st.pop();
        }
         while(!rev.empty())
        {
           ans +=  rev.top();
            rev.pop();
        }
       return ans; 
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        Solution obj;
        string ans = obj.removePair (s);
        if(ans=="")
            cout<<"Empty String"<<endl;
        else
            cout<<ans<<endl;
    }
    
	return 0;
}  // } Driver Code Ends