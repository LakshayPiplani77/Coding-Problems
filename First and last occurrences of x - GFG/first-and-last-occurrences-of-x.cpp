// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

vector<int> find(int arr[], int n , int key )
{
   // code here
   
 vector<int>ans;
   int s = 0;
   int e = n-1;
  int  mid = s+(e-s)/2;
   int ans1 = -1;
   //left occurance
   while(s<=e)
   {
       if(arr[mid] == key)
       {
          ans1 = mid;
          e = mid-1;
       }
       else if(key>arr[mid])
       {
           s = mid+1;
       }
       else if(key<arr[mid])
       {
           e = mid-1;
       }
       mid = (s+e)/2;
   }
   ans.push_back(ans1);
   //right 
       int s1 = 0;
       int e1 = n-1;
       int  mid1 = s+(e-s)/2;
       int ans2 = -1;
    while(s1<=e1)
   {
       if(arr[mid1] == key)
       {
          ans2 = mid1;
          s1 = mid1+1;
       }
       else if(key>arr[mid1])
       {
           s1 = mid1+1;
       }
       else if(key<arr[mid1])
       {
           e1 = mid1-1;
       }
       mid1 = (s1+e1)/2;
   }
   
   ans.push_back(ans2);
    return ans;
 
}

 

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends