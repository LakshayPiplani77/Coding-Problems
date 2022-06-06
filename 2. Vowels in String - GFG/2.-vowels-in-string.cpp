// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

int countVowels(string str)
{
    // count number of vowels present in string
    int count = 0;
    for(int i = 0;i<str.length();i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )
        count++;
    }
    return count;
}

// { Driver Code Starts.
    
int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    string str;
	    cin >> str;
	    cout << countVowels(str) << endl;
	}
}  // } Driver Code Ends