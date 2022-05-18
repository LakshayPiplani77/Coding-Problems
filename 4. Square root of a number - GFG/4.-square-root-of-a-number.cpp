// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

 // } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here
        long long int start = 1, end = x;
        long long int mid = start + (end-start)/2;
        while(start <= end)
        {
            if(mid*mid == x)
            return mid;
            else if(mid*mid > x)
            end = mid-1;
            else if(mid*mid < x) {
            start = mid + 1;
            }
            mid = start + (end-start)/2;
        }
        return end;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}
  // } Driver Code Ends