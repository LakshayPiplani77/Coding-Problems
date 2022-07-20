class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(); //rows
        int n = matrix[0].size(); //cols
        int temp[m][n];
        for(int i = 0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                temp[i][j] = 1;
            }
        }
        for(int i = 0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(matrix[i][j] == 0)
                {
                    for(int k = 0;k<m;k++)
                    temp[k][j] = 0;
                    for(int k = 0;k<n;k++)
                    temp[i][k] = 0;
                }
            }
        }
        for(int i = 0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(temp[i][j]==0)
                   matrix[i][j]=temp[i][j];
                else
                    matrix[i][j]=matrix[i][j];
            }
        }
        
    }
};