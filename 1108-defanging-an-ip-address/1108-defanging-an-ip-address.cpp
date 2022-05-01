class Solution {
public:
    string defangIPaddr(string address) {
        string res = "";
        for(auto c: address)
        {
            if(c == '.'){
                res.push_back('[');
                res.push_back('.');
                res.push_back(']');
            }
            else
                res.push_back(c);
        }
        return res;
    }
};