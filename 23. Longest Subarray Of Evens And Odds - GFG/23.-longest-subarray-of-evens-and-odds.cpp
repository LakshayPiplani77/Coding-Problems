// { Driver Code Starts
//Initial Template for C++
#include<iostream> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Complete this function
    //Function to find the length of longest subarray of even and odd numbers.
    #include<climits>
    int maxEvenOdd(int arr[], int n) 
    { 
       //Your code here
       int count = 1;
       int maxi = count;
    //   int maxi = INT_MIN;
       for(int i = 1;i<n;i++)
       {
           if((arr[i-1]%2 == 0 && arr[i]%2 != 0) || (arr[i-1]%2 != 0 && arr[i]%2 == 0))
               { count += 1;
               maxi = max(count,maxi);
               }
            else
            count = 1;
           
       }
    
        return maxi;
    } 
};

// { Driver Code Starts.
int main() 
{ 
    int testcases;
    //testcases
    cin>>testcases;
    while(testcases--)
    {
        int sizeOfArray;
        //size of array
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        
        //inserting elements in the array
        for(int i=0;i<sizeOfArray;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        //calling function
        cout  << ob.maxEvenOdd(arr, sizeOfArray)<<endl; 
    }
   return 0; 
} 
  // } Driver Code Ends