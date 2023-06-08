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




        // int i=0;
        // int j=0;
        // int k=matrix[i].size()-1;
        // int l=matrix[i].size()-1;
        // int mid1=(i+k)/2;
        // int mid2=(j+l)/2;

        // while((i+1)*(j+1)<matrix.size())
        // {
        //     if(target==matrix[mid1][mid2])
        //     {
        //         return true;
        //     }
        //     if(matrix[mid1][mid2]<target)
        //     {
        //         i=mid1+1;
        //         j=mid2+1;
        //     }
        //     else
        //     {
        //         k=mid1-1;
        //         l=mid2-1;
        //     }
        //     mid1=(i+k)/2;
        //     mid2=(j+l)/2;
        // }
        // return false;
  }
};