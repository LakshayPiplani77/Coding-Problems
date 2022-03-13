#include<stack>
class Solution {
public:
    bool isValid(string s) {
     stack<char> st;
    char x;
    for(int i = 0;i<s.length();i++)
    {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push(s[i]);
            continue;
        }
        if(st.empty())
            return false;
        switch (s[i]) {
        case ')':
             
            // Store the top element in a
            x = st.top();
            st.pop();
            if (x == '{' || x == '[')
                return false;
            break;
 
        case '}':
 
            // Store the top element in b
            x = st.top();
            st.pop();
            if (x == '(' || x == '[')
                return false;
            break;
 
        case ']':
 
            // Store the top element in c
            x = st.top();
            st.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }
    return (st.empty());   
    }
};