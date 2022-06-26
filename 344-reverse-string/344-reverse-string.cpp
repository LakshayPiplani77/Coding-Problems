class Solution {
private: 
    void solve(int start,int end,vector<char>& s)
    {
        if(start>=end)
            return;
        swap(s[start],s[end]);
        solve(start+1,end-1,s);
    }
public:
    void reverseString(vector<char>& s) {
        solve(0,s.size()-1,s);
    }
};