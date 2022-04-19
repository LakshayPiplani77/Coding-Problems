// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

int digitalRoot(int n)
{
    //Your code here
    int result;
    if(n==0)
    return 0;
    else
    {
        result = n%10+digitalRoot(n/10);
        if(result<10)
        return result;
        else
        return digitalRoot(result/10)+result%10;
    }
}

// { Driver Code Starts.


int main() {
	int T;
	scanf("%d", &T);//taking testcases
	while(T--)
	{
	    int n;
	    scanf("%d", &n);//taking number n
	    
	    //calling digitalRoot() function
	    printf("%d\n", digitalRoot(n));
	    
	    
	}
	return 0;
}  // } Driver Code Ends