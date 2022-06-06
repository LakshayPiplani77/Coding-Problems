// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdbool.h>


 // } Driver Code Ends
//User function Template for C

// Complete the function
// n: Input n
// Return true if the given number is a lucky number else return False

bool isLucky(int n) {
    // code here
    if(n == 1)
    return true;
    for(int i = 2;i<=n;i++)
    {
        if(n%i == 0)
        return false;
        n = n - ceil(n/i);
    }
   return true;
}

// { Driver Code Starts.

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        int n;
        scanf("%d", &n);
        //calling isLucky() function
        if(isLucky(n))
            printf("1\n");//printing "1" if isLucky() returns true
        else
            printf("0\n");//printing "0" if isLucky() returns false
    }
    
}  // } Driver Code Ends