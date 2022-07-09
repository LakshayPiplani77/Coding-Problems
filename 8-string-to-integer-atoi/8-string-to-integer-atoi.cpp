#include <sstream>
class Solution {
public:
    int myAtoi(string s) {
       stringstream sso;
        sso << s;
        int input = 0;
        sso >> input;
        return input;
    }
};