class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        int rows = accounts.size();
        int cols = accounts[0].size();
        for(int i=0;i<rows;i++){
            int wealth_each=0;
            for(int j=0;j<cols;j++){
                wealth_each += accounts[i][j]; 
            }
            
            ans = max(ans,wealth_each);
        }
        
        return ans;
    }
};