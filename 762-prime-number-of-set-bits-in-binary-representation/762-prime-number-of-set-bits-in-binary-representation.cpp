class Solution {
private:
    int countSetBits(int n)
    {
        int count = 0;
        while(n > 0)
        {
            if(n&1)
                count++;
            n = n/2;
        }
        return count;
    }
public:
    int countPrimeSetBits(int left, int right) {
        int count = 0;
        for(int i = left;i<=right;i++)
        {
            int setBit = countSetBits(i);
            if(setBit == 2 || setBit == 3 || setBit == 5 || setBit == 7 ||setBit == 11 ||
              setBit == 13 || setBit == 17 || setBit == 19 || setBit == 23 || setBit == 29 ||setBit == 31)
                count++;
        }
        return count;
    }
};