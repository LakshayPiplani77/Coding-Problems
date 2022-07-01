class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
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
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};