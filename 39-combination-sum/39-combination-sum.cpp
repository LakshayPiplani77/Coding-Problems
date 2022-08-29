class Solution {
private:
    void f(int ind,int target,vector<int> &arr,vector<int>&comb,vector<vector<int>> &ans)
    {
        if(ind == arr.size())
        {
            if(target == 0)
                ans.push_back(comb);
            return;
        }
        if(arr[ind] <= target)
        {
            comb.push_back(arr[ind]);
            f(ind,target-arr[ind],arr,comb,ans);
            comb.pop_back();
        }
        f(ind+1,target,arr,comb,ans);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> comb;
        f(0,target,candidates,comb,ans);
        return ans;
    }
};