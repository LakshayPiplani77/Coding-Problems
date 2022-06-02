// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find the median of the two arrays when they get merged.
    int findMedian(int arr[], int n, int brr[], int m)
    {
        // code here
        vector<int> temp;
        for(int i = 0;i<n;i++)
        {
            temp.push_back(arr[i]);
        }
        for(int i = 0;i<m;i++)
        {
            temp.push_back(brr[i]);
        }
        sort(temp.begin(),temp.end());
        // for(int i = 0;i<temp.size();i++)
        // {
        //     cout<<temp[i] <<" ";
        // }
        if((n+m) % 2 != 0)
        {
            return temp[(n+m)/2];
        }
        return (temp[(n+m)/2] +  temp[((n+m)/2) - 1])/2;
    
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int arr[n];
	    int brr[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> brr[i];
	    }
	    Solution obj;
	    if(n < m)
	        cout << obj.findMedian(arr, n, brr, m) << endl;
	   else
	        cout << obj.findMedian(brr, m, arr, n) << endl;
	    
	}

}  // } Driver Code Ends