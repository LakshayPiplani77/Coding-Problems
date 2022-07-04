// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    private:
    void reverse(int arr[],int start,int end)
    {
        
        while(start <= end)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        d = d%n;
        reverse(arr,0,d-1); //first reverse first d elements
        reverse(arr,d,n-1); //second reverse next elements from d to n-1
        reverse(arr,0,n-1); //reverse all elements again to get result;
    }
};

// { Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}  // } Driver Code Ends