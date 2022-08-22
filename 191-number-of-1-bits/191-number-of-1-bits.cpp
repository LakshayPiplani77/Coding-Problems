class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n >= 1)
        {
            n  = n & (n-1);
            count++;
        }
        return count;
    }
};