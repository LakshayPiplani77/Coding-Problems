class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        stack<char> rev;
        st.push(s[0]);
        string ans = "";
        for(int i = 1;i<s.length();i++)
        {
            if(!st.empty() && s[i] == st.top())
                st.pop();
            else
            {
                st.push(s[i]);
            }
        }
        while(!st.empty())
        {
            rev.push(st.top());
            st.pop();
        }
        while(!rev.empty())
        {
            ans += rev.top();
            rev.pop();
        }
        return ans;
    }
};