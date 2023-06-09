class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {

       int i=0;
       int j=grid[0].size()-1;
       int row=grid.size();
       int count=0;
       while(i<grid.size() && j>=0)
       {
           if(grid[i][j]>=0)
           {
               i++;
           }
           else if(grid[i][j]<0)
           {
               j--;
               count=count+(row-i);
           }
       }
       return count;
    }
};
// Time Complexity -O(n)
// Space Complexity -O(1)


// Time Complexity -O(n^2)
// Space Complexity -O(1)
        // int count=0;
        // for(int i=0;i<grid.size();i++)
        // {
        //     for(int j=0;j<grid[i].size();j++)
        //     {
        //         if(grid[i][j]<0)
        //         {
        //             count++;
        //         }
        //     }
        // }
        // return count;