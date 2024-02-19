class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //previous one was brute-force approach, now we'll see optimal solution
        int length = matrix.size(); 
        
        //firstly find the transpose: we'll get reversed matrix
        for(int i = 0; i < length; i++){
            for(int j = i+1; j < length; j++){
                 int temp = matrix[i][j];
                 matrix[i][j] = matrix[j][i];
                 matrix[j][i] = temp;
            }
        }
        //then reverse the matrix to get the answer
        for (auto& row : matrix) {
            reverse(row.begin(), row.end());
        }
        
        
    }
};
