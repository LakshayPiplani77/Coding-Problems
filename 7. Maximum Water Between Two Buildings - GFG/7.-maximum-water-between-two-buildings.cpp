// { Driver Code Starts
//Initial Template for C++


// C++ implementation of the approach 
#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to return the maximum water that can be stored.
    int maxWater(int arr[], int n) 
   {
       int l= 0;
       int r= n-1;
       
       int max_d= INT_MIN;
       
       while(l<r){
           int curr_d= min(arr[l], arr[r])* (r-l-1);
           
           max_d= max(curr_d, max_d);
           
           if(arr[l]< arr[r])
               l++;
           else
               r--;
       }
       
       return max_d;
   }
};



// { Driver Code Starts.

// Driver code 
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int height[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>height[i];
        }
        Solution ob;
        cout<<(ob.maxWater(height, n))<<endl;
    }

	 
} 

  // } Driver Code Ends