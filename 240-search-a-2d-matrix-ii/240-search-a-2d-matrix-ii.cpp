class Solution {
public: 
    //approach 2
    /*
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int rowIndex = row-1;
        int colIndex = 0;
        while(rowIndex >= 0 && colIndex < col)
        {
            int element = matrix[rowIndex][colIndex];
            if(element == target)
                return 1;
            if(element>target)
                rowIndex--;
            else
                colIndex++;
        }
        return 0;
        
    }
    */
    
    //approach 1
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int rowIndex = 0;
        int colIndex = col-1;
        while(rowIndex < row && colIndex >= 0)
        {
            int element = matrix[rowIndex][colIndex];
            if(element == target)
                return 1;
            if(element<target)
                rowIndex++;
            else
                colIndex--;
        }
        return 0;
    }
    
};