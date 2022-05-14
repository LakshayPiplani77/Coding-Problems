// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++
void triangle(int s){
int start = 1;
   int end = s;
   for (int i = start; i <= end; i++)
   {
       for (int j = start; j <= end; j++)
       {
           if (i == s or j == 1)
           {
               cout << "* ";
           }
           else if (i == j)
           {
               cout << " *";
           }
           else
           { // NOTE: Space character & a Extra Space
               cout << "  ";
           }
       }
       cout << "\n";
   }

}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int s; cin>>s;
	    triangle(s);
	}
}  // } Driver Code Ends