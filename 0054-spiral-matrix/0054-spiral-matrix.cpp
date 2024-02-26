class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> result;
        int top = 0;
        int left = 0;
        int right = n-1;
        int bottom = m-1;
        
        while(left <= right && top <= bottom){
            //traversing top row till right
            for(int i = left; i <= right; i++){
                result.push_back(matrix[top][i]);
            }
            top++;
            
            //traversing last column till bottom
            for(int i = top; i <= bottom; i++){
                result.push_back(matrix[i][right]);
            }
            right--;
            
            //traversing bottom row till left
            if(top <= bottom){
                for(int i = right; i >= left; i--){
                    result.push_back(matrix[bottom][i]);
                }
            }
            bottom--;
            
            //traversing upto top from bottom
            if(left <= right){
                for(int i = bottom; i >= top; i--){
                    result.push_back(matrix[i][left]);
                }    
            }
            left++;
        }
        return result;
    }
};