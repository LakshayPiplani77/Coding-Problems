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
        map<char,int> mp;
        for(int i = 0;i<str.size();i++)
        {
            mp[str[i]]++;
        }
        int maxi = INT_MIN;
        char ans;
        for(auto i: mp)
        {
            if(i.second > maxi){
            maxi = i.second;
            ans = i.first;
            }
        }
        return ans;
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