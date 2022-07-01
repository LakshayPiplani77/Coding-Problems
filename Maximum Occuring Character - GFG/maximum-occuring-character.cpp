// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int freq[26] = {0};
        int res,maxi = 0;
        for(int i = 0;i<str.size();i++)
        {
            freq[str[i] - 'a']++;
        }
        for(int i = 0;i<25;i++)
        {
            if(freq[i] > maxi)
            {
                res = i;
                maxi = freq[i];
            }
        }
        return res + 'a';
    }

};

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends