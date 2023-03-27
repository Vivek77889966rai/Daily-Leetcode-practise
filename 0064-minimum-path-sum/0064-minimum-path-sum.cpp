class Solution {
public:
    int m, n;
    vector<vector<int>> dp;
    int fun(int x, int y, vector<vector<int>>& grid){
        if(dp[x][y]!=-1) return dp[x][y];
        int ans = grid[x][y];
        if(x==m && y<n) ans += fun(x, y+1, grid);
        else if(x<m && y==n) ans += fun(x+1, y, grid);
        else if(x<m && y<n) ans += min (fun(x+1, y, grid), fun(x, y+1, grid));
        return dp[x][y] = ans;
    }
    int minPathSum(vector<vector<int>>& grid) {
        m = grid.size()-1, n = grid[0].size()-1;
        dp.resize(m+1, vector<int>(n+1, -1));
        return fun(0, 0, grid);
    }
};