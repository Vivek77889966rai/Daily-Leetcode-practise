class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int rows= grid.size();
        int cols= grid[0].size();
        
        int ans=0;
        for(int i=0;i<rows;i++){
            sort(grid[i].begin(),grid[i].end(),greater<int>());
        }
        
        for(int i=0;i<cols;i++){
            int tempMax=0;
            for(int j=0;j<rows;j++){
                tempMax= max(tempMax,grid[j][i]);
            }
            ans += tempMax;
        }
        
        return ans;
    }
};