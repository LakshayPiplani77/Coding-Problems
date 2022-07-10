// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    private:
    void findpermutations(int index, string&s, vector<string>&ans)
{
    if(index==s.size())
    {
        ans.push_back(s);
        return;
    }
    for(int i=index;i<s.size();i++)
    {
        swap(s[index],s[i]);
        findpermutations(index+1,s,ans);
        swap(s[index],s[i]);
    }
}
	public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
    vector<string>ans;
    int index=0;
    findpermutations(index,S,ans);
    sort(ans.begin(),ans.end());
      ans.erase(unique(ans.begin(), ans.end()), ans.end());
    return ans;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends