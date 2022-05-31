// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdlib.h>


 // } Driver Code Ends
//User function Template for C

// Function to find floor of K
// arr[]: integer array of size N
// N: size of arr[]
// K: element whose floor is to find
int findFloor(long long int arr[], int N, long long int x) {
    
    //Your code here
    long long ans = -1;
    for(int i = 0;i<N;i++)
    {
        if(arr[i] <= x)
        {
            ans = i;
        }
        else{
            break;
        }
    }
    return ans;
}

// { Driver Code Starts.

int main() {
	
	long long int t;
	scanf("%lld", &t);
	
	while(t--){
	    int n;
	    scanf("%d", &n);
	    long long int x;
	    scanf("%lld", &x);
	    
	    long long int *arr;
		arr = (long long int *)malloc(n * sizeof(long long int));
	    
	    for(int i = 0;i<n;i++){
	        scanf("%lld", &arr[i]);
	    }
	    printf("%d\n", findFloor(arr, n, x) );
	   
	}
	
	return 0;
}

  // } Driver Code Ends