class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int> mp;
        for(int i = lowLimit;i<=highLimit;i++)
        {
           int temp = i;
            int sum = 0;
            if(i<=9)
                mp[i]++;
            else{
            while(temp != 0)
            {
                int digit = temp%10;
                sum += digit;
                temp = temp/10;
            }
            mp[sum]++;
            }
        }
        int ans = -1e9;
        for(auto i: mp)
        {
           if(i.second > ans)
               ans = i.second;
        }
        return ans;
    }
};