// { Driver Code Starts
//Initial Template for C++


#include<iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    //Complete this function
    int isSorted(int arr[],int n)
    {
       if(arr[0] < arr[n-1]){
          for(int i = 1; i < n; i++){
              if(arr[i-1] > arr[i]) return 0;
          }
          return 1;
      }
      else if(arr[0] > arr[n-1]){
          for(int i = 1; i < n; i++){
              if(arr[i-1] < arr[i]) return 0;
          }
          return 1;
      }
      else return 1;
    }
};

// { Driver Code Starts.


int main() {
	int T;
	cin>>T;
	while(T--) 
	{
	    int N;
	    cin>>N;
	    int arr[N];
	    for(int i=0;i<N;i++)
	    cin>>arr[i];
	    Solution obj;
	    cout<<obj.isSorted(arr,N);
	    cout<<endl;
	}
	return 0;
}  // } Driver Code Ends