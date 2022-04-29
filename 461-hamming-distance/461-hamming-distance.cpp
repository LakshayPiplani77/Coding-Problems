class Solution {
public:
    int hammingDistance(int x, int y) {
    int n = x^y;
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
    }
};