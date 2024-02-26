class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(); //rows
        int m = matrix[0].size(); //columns
        int col0 = 1;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j]==0){
                    //check i-th row 
                    matrix[i][0] = 0;
                    //check j-th column
                    if(j != 0){
                        matrix[0][j] = 0;
                    }else{
                        col0 = 0;
                    }
                }
            }
        }
        
        for(int i = 1; i < n; i++){
            for(int j = 1; j < m; j++){
                if(matrix[i][j] != 0){
                    //then check for their state.
                    if(matrix[i][0] == 0 || matrix[0][j]==0){
                        matrix[i][j] = 0;
                    }
                }
            }
        }
        
        if(matrix[0][0] == 0){
            //checking for 0th row first
            for(int j = 0; j < m; j++){
                matrix[0][j] = 0;
            }
        }
        
        if(col0 == 0){
            for(int i = 0; i < n; i++){
                matrix[i][0] = 0;
            }
        }

    }
};