class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int rows = mat.size();
        int cols = mat[0].size();
        if((rows*cols)%2 !=0){
            sum = sum- mat[rows/2][cols/2];
        }
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(i==j){
                    sum += mat[i][j];
                }
                if(i+j == cols-1 ){
                    sum += mat[i][j];
                }
            }
        }
        
        return sum;
    }
};