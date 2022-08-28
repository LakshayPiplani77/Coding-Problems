class Solution {
private:
    int countDigits(int n) {
        if(n >= 0 && n <= 9)
            return 1;
        return 1 + countDigits(n/10);
    }
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(auto i: nums){
            int ans = countDigits(i);
            if(ans % 2 == 0)
                count++;
        }
        return count;
    }
};