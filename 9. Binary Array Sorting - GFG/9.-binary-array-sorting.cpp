// { Driver Code Starts
// A Sample C++ program for beginners with Competitive Programming

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
        int left = 0, right = N-1;
 
    while (left < right)
    {
        /* Increment left index while we see 0 at left */
        while (A[left] == 0 && left < right)
            left++;
 
        /* Decrement right index while we see 1 at right */
        while (A[right] == 1 && left < right)
            right--;
 
        /* If left is smaller than right then there is a 1 at left
        and a 0 at right. Exchange arr[left] and arr[right]*/
        if (left < right)
        {
            A[left] = 0;
            A[right] = 1;
            left++;
            right--;
        }
    }
    }
};

// { Driver Code Starts.
int main() {
	int T;
	cin>>T;
	// Input the number of testcases
	while(T--)
	{
	    int N;
	    cin>>N; //Input size of array N
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	      
	    Solution obj;
	    obj.binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	}
	return 0;
}



  // } Driver Code Ends