// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    private:
    void f(int ind,vector<int> &store,vector<vector<int>> &ans,vector<int> &arr,int n)
{
    if(ind == n)
    {
        ans.push_back(store);
        return;
    }
    //take
    store.push_back(arr[ind]);
    f(ind+1,store,ans,arr,n);
    //not take
    store.pop_back();
    f(ind+1,store,ans,arr,n);
}
    public:
    vector<vector<int> > subsets(vector<int>& A)
    {
        //code here
        int n = A.size();
    vector<vector<int>> ans;
    vector<int> store;
    f(0,store,ans,A,n);
    sort(ans.begin(),ans.end());
    return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}  // } Driver Code Ends