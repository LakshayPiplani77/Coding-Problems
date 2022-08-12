class Solution {
public:
    bool hasAlternatingBits(int n) {
        int last = n&1;
        n = n/2;
        while(n != 0)
        {
            int curr = n&1;
            if(last == curr)
                return false;
            last = curr;
            n = n/2;
        }
        return true;
    }
};