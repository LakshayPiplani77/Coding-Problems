class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ans;
        int x = 0;
        ans.push_back(0);
        for(int i = 0;i<gain.size();i++)
        {
            x=ans[i]+gain[i];
            ans.push_back(x);
        }
        int  min=ans[0];
        for(int i=1;i<ans.size();i++){
            if( ans[i]>min)
            min=ans[i];
        }
   return min; 
    }
};