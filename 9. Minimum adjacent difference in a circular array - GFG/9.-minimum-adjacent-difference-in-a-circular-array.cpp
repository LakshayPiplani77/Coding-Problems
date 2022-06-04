// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    //Function to find minimum adjacent difference in a circular array.
    // arr[]: input array
    // n: size of array
    int minAdjDiff(int arr[], int n){    
        // Your code here
        vector<int> ans;
        int diff;
        for(int i = 1;i<n;i++)
        {
            if(i == n-1)
            {
                ans.push_back(abs(arr[0]-arr[i]));
            }
            diff = abs(arr[i] - arr[i-1]);
            ans.push_back(diff);
        }
        
        int mini = INT_MAX;
        for(int i = 0;i<ans.size();i++)
        {
            // cout<<ans[i]<<" ";
            if(ans[i] < mini)
            {
                mini = ans[i];
            }
        }
        return mini;
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; //Input testcases
    
    while(t--) //While testcases exist
    {
        int n;
        cin>>n; //Input size of array
        
        int arr[n]; //Array of size n
        
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i]; //input elements of array
        }
        Solution ob;
        
        cout << ob.minAdjDiff(arr, n) << endl;
    }
    return 0;
}  // } Driver Code Ends