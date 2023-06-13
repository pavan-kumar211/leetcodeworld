class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int ans=0;
        int m=grid.size();
        int n=grid[0].size();
        map<vector<int>,int> mp;
        for(vector<int> row:grid)
        {
            mp[row]++;
        }
        for(int i=0;i<m;i++)
        {
            vector<int> col;
            for(int j=0;j<n;j++)
            {                
                col.push_back(grid[j][i]);
            }
            
            if(mp[col]>0) 
                ans += mp[col];
        }
        return ans;
    }
};