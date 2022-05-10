class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool isCol = false;
        bool isRow = false;
        int r = matrix.size();
        int c = matrix[0].size();

        for (int i = 0; i < r; ++i) {
            if (matrix[i][0] == 0) isCol = true;
            for (int j = 0; j < c; ++j) {
                if (i == 0 && matrix[i][j] == 0) isRow = true;
                if (matrix[i][j] == 0) {
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }
        for (int i = 1; i < r; ++i)
            for (int j = 1; j < c; ++j)
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;

        if (isRow)
            for (int j = 0; j < c; ++j)
                matrix[0][j] = 0;

        if (isCol)
            for (int i = 0; i < r; ++i)
                matrix[i][0] = 0;
    }
};