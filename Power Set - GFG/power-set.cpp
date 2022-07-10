// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    private:
    void solve(int ind,vector<string> &ans,string &s,int n,string &temp)
    {
        if(ind == n)
        {
            if(temp != "")
            ans.push_back(temp);
            return;
        }
        // take 
        temp.push_back(s[ind]);
        solve(ind+1,ans,s,n,temp);
        //not take
        temp.pop_back();
        solve(ind+1,ans,s,n,temp);
        
    }
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> ans;
		    string temp = "";
		    int n = s.size();
		    solve(0,ans,s,n,temp);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends