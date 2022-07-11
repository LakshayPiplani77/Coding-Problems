// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    private:
    void solve(int a[],int n,string ans,int index,vector<string> &result,string mapping[])
    {
        if(index == n)
        {
            result.push_back(ans);
            return;
        }
        int number = a[index];
        string value = mapping[number];
        for(int i = 0;i<value.length();i++)
        {
            ans.push_back(value[i]);
            solve(a,n,ans,index+1,result,mapping);
            ans.pop_back();
        }
    }
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        vector<string> result;
        string ans = "";
        if(N == 0)
        return result;
        int index = 0;
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(a,N,ans,index,result,mapping);
        return result;
    }
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends