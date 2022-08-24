class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n != 0)
        {
            int r = n%3;
            n = n/3;
            if(r == 2)
                return false;
        }
        return true;
    }
};