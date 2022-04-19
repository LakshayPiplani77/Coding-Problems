// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void utility(int a, int b, int operator_){

    //write your code here
    
    switch(operator_)
    {
        case 1: 
        cout<<a+b;
        break;
        case 2: 
        cout<<a-b;
        break;
        case 3:
        cout<<a*b;
        break;
        default:
        cout<<"Invalid Input";
    }
    
    
    
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	while(t--){
	    int a, b, operator_;
	    cin>>a>>b>>operator_;
        utility(a, b, operator_);
        cout<<endl;
	}
	
}  // } Driver Code Ends