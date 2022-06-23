// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    int checkRedundancy(string s) {
        // code here
        stack<char> st;
        for(int i = 0;i<s.size();i++)
        {
            char x = s[i];
            if(x == '(' || x == '+' || x == '-' || x == '*' || x == '/'){
                st.push(x);
            }
            else
            {
                if(x == ')')
                {
                    bool isRedundant = 1;
                    while(st.top() != '(')
                    {
                        char top = st.top();
                        if(top == '+' || top == '-' || top == '*' || top == '/')
                        {
                            isRedundant = 0;
                        }
                        st.pop();
                    }
                    if(isRedundant == 1)
                    {
                        return 1;
                    }
                    st.pop();
                }
            }
        }
        return 0;
    }
};


// { Driver Code Starts.

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        
    
        string s; 
        cin>>s;
        
        Solution obj;
        int res = obj.checkRedundancy(s);
        
        cout<<res<<endl;
        
    }
}
  // } Driver Code Ends