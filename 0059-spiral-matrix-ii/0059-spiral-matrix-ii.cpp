class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        int left = 0, right = n-1;
        int top = 0, bottom = n-1;
        int num = 1; 
        while(left <= right && top <= bottom){
            //top row
            for(int i = left; i <= right; i++){
                matrix[top][i] = num;
                num++;
            }
            top++;
            
            //last column
            for(int i = top; i <= bottom; i++){
                matrix[i][right] = num;
                num++;
            }
            right--;
            
            //last row
            if(top <= bottom){
                for(int i = right; i >= left; i--){
                    matrix[bottom][i] = num;
                    num++;
                }
                bottom--;
            }
            
            //top column
            if(left <= right){
                for(int i = bottom; i >= top; i--){
                    matrix[i][left] = num;
                    num++;
                }
                left++;
            }
        }
        return matrix;
    }
};