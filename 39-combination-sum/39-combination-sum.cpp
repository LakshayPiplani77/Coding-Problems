class Solution {
private:
    void solve(int index,int target,vector<int> &arr,vector<int> &comb,vector<vector<int>> &ans)
    {
        if(index == arr.size())
        {
            if(target == 0)
            {
                ans.push_back(comb);
            }
            return;
        }
        if(arr[index] <= target)
        {
            comb.push_back(arr[index]);
            solve(index,target-arr[index],arr,comb,ans);
            comb.pop_back();
            
        }
        solve(index+1,target,arr,comb,ans);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> comb;
        solve(0,target,arr,comb,ans);
        return ans;
    }
};