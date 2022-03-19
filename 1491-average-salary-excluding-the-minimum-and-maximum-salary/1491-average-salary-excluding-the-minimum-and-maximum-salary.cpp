class Solution {
public:
    double average(vector<int>& salary) {
       sort(salary.begin(),salary.end());
        double sum = 0;
        int avg;
        int n = salary.size();
        int maxi = salary[0];
        int mini = salary[n-1];
        for(int i = 0;i<n;i++)
        {
            
            sum += salary[i];
            
        }
        return (sum-(mini+maxi))/(n-2);
    }
};