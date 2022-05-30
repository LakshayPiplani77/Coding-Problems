// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    private:
     void solve(string s,  vector<string> &ans,int index)
    {
        //base case
        if(index >= s.length()-1)
        {
            ans.push_back(s);
            return;
        }
        for(int j = index;j<s.length();j++)
        {
        swap(s[index],s[j]);  
        solve(s,ans,index+1);
            //backtrack
        swap(s[index],s[j]);
        }
    }
    public:
    vector<string> permute(string s){
       // code here
       vector<string> ans;
        int index = 0;
        solve(s,ans,index);
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution obj;
		vector<string> ans;
		ans = obj.permute(s);
		sort(ans.begin(), ans.end());
		for(auto x: ans)
		    cout << x << " ";
		
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends