class Solution {
public:
    bool halvesAreAlike(string s) {
        if(s.length() % 2 == 1)
            return false;
        int mid = s.size()/2;
        int count1 = 0,count2 = 0;
        for(int i = 0;i<mid;i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' 
               || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                count1++;
        }
        for(int i = mid;i<s.size();i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' 
               || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                count2++;
        }
        if(count1 == count2)
            return true;
        return false;
    }
};