class Solution{
private:
bool isvowel (char character)
    {
        character = tolower (character);
        if (character == 'a' or character == 'e' or character == 'i' or character == 'o' or character == 'u')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
public:
    string reverseVowels(string s)
    {
        int left = 0, right = s.size() - 1;
        while (left < right)
        {
            if (isvowel (s[left]) and isvowel(s[right]))
            {
                swap (s[left], s[right]);
                ++left, --right;
            }
            else if (isvowel (s[left]) and not isvowel (s[right]))
            {
                --right;
            }
            else if (not isvowel (s[left]) and isvowel (s[right]))
            {
                ++left;
            }
            else
            {
                ++left, --right;
            }
        }
        return s;
    }
};