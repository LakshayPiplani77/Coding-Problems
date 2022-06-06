// { Driver Code Starts
//Initial Template for C++


#include <iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    //Complete this function
    int RecursivePower(int n,int p)
{
    if(p==0) return 1;
    if(p==1) return n;
    long long temp=RecursivePower(n, p/2);
    temp= temp*temp;
    
    if(p%2==0) return temp;
    else return (temp*n);
}
};


// { Driver Code Starts.


int main() {
	int T;
	cin>>T;//testcases
	while(T--)
	{
	    int n,p;
	    
	    //taking n and p as inputs
	    cin>>n>>p;
	    
	    //calling RecursivePower() function
	    Solution obj;
	    cout<<obj.RecursivePower(n,p)<<endl;
	}
	return 0;
}  // } Driver Code Ends