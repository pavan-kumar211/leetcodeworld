class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int i=0;
        int j=matrix[0].size()-1;
        int m=matrix.size();
        int n=matrix[0].size();
        while(i<m &&j>=0)
        {
            if(target==matrix[i][j])
            {
                return true;
            }
            if(target<matrix[i][j])
            {
                j--;
            }
            else {
                i++;
            }
        }
        return false;
    }
};