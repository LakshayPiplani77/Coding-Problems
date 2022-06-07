// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    const int CHAR = 256;
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        if(a.length () != b.length())
            return false;
        int count[CHAR] = {0};
        for(int i = 0;i<a.length();i++)
        {
            count[a[i]]++;
            count[b[i]]--;
        }
        for(int i = 0;i<CHAR;i++)
        {
            if(count[i] != 0)
              return false;
        }
        return true;
    }

};

// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends