// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        // code here
        int countZeroes = 0;
        int countOnes = 0;
        for(int i = 0;i<n;i++)
        {
            if(arr[i] == 0)
            countZeroes++;
            if(arr[i] == 1)
            countOnes++;
        }
       for(int i = 0;i<countZeroes;i++)
       {
           arr[i] = 0;
       }
       for(int i = countZeroes;i<n;i++)
       {
           arr[i] = 1;
       }
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregate0and1(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends