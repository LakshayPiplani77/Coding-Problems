// { Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

#include<unordered_map>
class Solution
{
    public:
    //Function to find repeated element and its frequency.
    pair<int, int> findRepeating(int *arr, int n){
        //code here
        pair<int,int> p;
        unordered_map<int,int> mp;
        for(int i = 0;i<n;i++)
        {
            mp[arr[i]]++;
        }
       for(int i = 0;i<n;i++)
       {
           if(mp[arr[i]] > 1)
           {
               p.first = arr[i];
               p.second = mp[arr[i]];
               return p;
           }
       }
      return {-1,-1};
        
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    Solution obj;
	    pair<int, int> ans = obj.findRepeating(arr,n);
	    
	    cout << ans.first << " " << ans.second << endl;
	    
	}
	
}  // } Driver Code Ends