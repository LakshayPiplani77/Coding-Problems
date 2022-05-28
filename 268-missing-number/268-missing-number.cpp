class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x;
        bool visited[10000]={false};
        for(int i=0;i<nums.size();i++)
            visited[nums[i]]=true;
        for(int i=0;i<=nums.size();i++)
        {
            if(visited[i]!=true&&visited[i]<=nums.size())
                x=i;
        }
        return x;
        // int total = nums.size()*(nums.size()+1)/2;
        // int sum = 0;
        // for(int i = 0;i<nums.size();i++)
        // {
        //     sum += nums[i];
        // }
        // return total-sum;
        
    }
};