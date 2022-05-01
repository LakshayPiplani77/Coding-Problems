#include<stack>
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1,t1;
        string str1,str2;
        for(int i = 0;i<s.length();i++)
        {
            if(s[i] == '#' && !s1.empty())
                s1.pop();
            else if(s[i] != '#')
            {
                s1.push(s[i]);
            }
        }
        for(int i = 0;i<t.length();i++)
        {
            if(t[i] == '#' && !t1.empty())
                t1.pop();
            else if(t[i] != '#')
            {
                t1.push(t[i]);
            }
        }
        while(!s1.empty())
        {
            str1.push_back(s1.top());
            s1.pop();
        }
        while(!t1.empty())
        {
            str2.push_back(t1.top());
            t1.pop();
        }
        return str1 == str2;
    }
};