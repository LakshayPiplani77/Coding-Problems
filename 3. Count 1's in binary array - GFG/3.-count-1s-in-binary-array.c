// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

// Function to count number of Ones
// arr: input array 
// N: size of input array
int countOnes(int arr[], int N)
{
    //Your code here
    int start = 0;
    int end = N-1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid] == 0){
            end = mid-1;
        }
        else
        {
        if(arr[mid+1] == 0)
        return mid+1;
        else
        start = mid+1;
        }
    
    }
}

// { Driver Code Starts.

int main(){
    
    int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		scanf("%d", &n);
		int *a;
		a = (int*)malloc(n * sizeof(int));
		for (int i = 0; i < n; ++i)
			scanf("%d", &a[i]);

		printf("%d\n", countOnes(a, n) );
	}
	return 0;
	
}
  // } Driver Code Ends