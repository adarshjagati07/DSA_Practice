class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int length = matrix.size();
        vector<vector<int>> rotatedArr(length, vector<int>(length)); // Resize rotatedArr
        
        for(int i = 0; i < length; i++){
            for(int j = 0; j < length; j++){
                rotatedArr[j][(length-1) - i] = matrix[i][j];
            }
        }
        matrix = rotatedArr;
    }
};
