// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to remove consecutive duplicates from given string using Stack.
    string removeConsecutiveDuplicates(string s)
    {
        // Your code here
        stack<char> st;
        string ans;
        st.push(s[0]);
        stack<char> helper;
        for(int i = 1;i<s.length();i++)
        {
            if(s[i] != st.top())
            {
                st.push(s[i]);
            }
        }
        while(!st.empty())
        {
            helper.push(st.top());
            st.pop();
        }
        while(!helper.empty())
        {
            ans += helper.top();
            helper.pop();
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
        cout<<obj.removeConsecutiveDuplicates(s)<<endl;
    }
    
	return 0;
}  // } Driver Code Ends