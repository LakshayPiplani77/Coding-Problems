class Solution {
public:
    string convertToBase7(int num) {
        if(num== 0)
            return "0";
        bool flag = 1;
        if(num < 0)
        flag = 0;
        num = abs(num);
        string ans;
        int temp = num;
        while(temp != 0)
        {
            int digit = temp%7;
            ans += digit + '0';
            temp = temp/7;
        }
        reverse(ans.begin(),ans.end());
        if(flag == 0){
            ans.insert(ans.begin(),'-');
            return ans;
        }
        else
        return ans;
    }
};