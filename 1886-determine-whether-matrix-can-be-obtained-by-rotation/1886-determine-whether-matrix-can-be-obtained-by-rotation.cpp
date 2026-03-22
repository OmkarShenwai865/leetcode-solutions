class Solution {
public:
    bool isEqual(vector<vector<int>>& a, vector<vector<int>>& b) {
    int n = a.size();
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] != b[i][j]) return false;
        }
    }
    return true;
    }
    void rotatematrix(vector<vector<int>>& mat){
    int n = mat.size();
        // Step 1: Transpose
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }

        // Step 2: Reverse each row
        for(int i = 0; i < n; i++) {
            reverse(mat[i].begin(), mat[i].end());
        }
    }
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        //4 rotations i.e 0,90,180,270 deg
    for(int i = 0; i < 4; i++) {
            if(isEqual(mat, target)) return true;
            rotatematrix(mat);
        }
        return false;
    }
    //2nd way - formula based: mat[i][j] = rot[n - j - 1][i];
};