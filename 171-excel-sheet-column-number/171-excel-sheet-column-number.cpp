class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        int power = 0;
        for(int i = columnTitle.length()-1;i>=0;i--)
        {
            ans += pow(26,power)*(columnTitle[i]-'A' + 1);
            power++;
        }
        return ans;
    }
};