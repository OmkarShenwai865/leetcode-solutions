class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<int> mat1(n, 0);
        vector<int> mat2(n, 0);

        int res = 0;

        for (int i = 0; i < m; i++) {
            int rowX = 0, rowY = 0;

            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 'X')
                    rowX++;
                else if (grid[i][j] == 'Y')
                    rowY++;

                mat1[j] += rowX;
                mat2[j] += rowY;

                if (mat1[j] == mat2[j] && mat1[j] > 0)
                    res++;
            }
        }
        return res;        
    }
};