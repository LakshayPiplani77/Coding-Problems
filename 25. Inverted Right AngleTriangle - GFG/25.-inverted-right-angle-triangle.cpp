// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void invTriangleWall(int s){
    
    //Write your code here
    int i,j;
    for(i=s;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            cout<<"* "; // There must be a space after each '*'.
            
        }
        cout<<"\n";
    }
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int s; cin>>s;
        invTriangleWall(s);
	}
}  // } Driver Code Ends