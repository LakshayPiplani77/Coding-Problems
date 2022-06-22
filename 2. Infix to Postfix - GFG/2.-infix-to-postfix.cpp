// { Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution { 
  private:
  int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
  public:
    // Function to convert an infix expression to a postfix expression.
    
    string infixToPostfix(string s) {
        // Your code here
        stack<char> st;
        string str;
        for(int i = 0;i<s.length();i++)
        {
            int x = s[i];
            if(x >= 'a' && x <= 'z')
                 str += x;
        
            else if(x == '(' )
                st.push(x);
            
            else if(x == ')' )
            {
                while(st.top() != '(' )
                {
                    str += st.top();
                    st.pop();
                }
                st.pop();
            }
            else {
            while (!st.empty()
                   && prec(x) <= prec(st.top())) {
                if (x == '^' && st.top() == '^')
                    break;
                else {
                    str += st.top();
                    st.pop();
                }
            }
            st.push(x);
        }
    }
 
        while (!st.empty())
        {
        str += st.top();
        st.pop();
        }
           return str;
        }
};


// { Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}
  // } Driver Code Ends