// { Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void reverse_dig(int &a,int &b)
{
    //Add your code here.
    int rev_a = 0;
    int rev_b = 0;
    while(a > 0)
    {
        rev_a = rev_a*10 +  a%10;
        a = a/10;
    }
    while(b>0)
    {
        rev_b = rev_b*10 + b%10;
        b = b/10;
    }
    a = rev_a;
    b = rev_b;
}
void swap(int &a,int &b)
{
    //Add your code here.
    int temp = a;
    a = b;
    b = temp;
    
}


// { Driver Code Starts.

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
	    cin>>a>>b;
	
	    reverse_dig(a,b);
	    swap(a,b);
	    cout<<a<<" "<<b<<endl;
    }
	return 0;
}  // } Driver Code Ends