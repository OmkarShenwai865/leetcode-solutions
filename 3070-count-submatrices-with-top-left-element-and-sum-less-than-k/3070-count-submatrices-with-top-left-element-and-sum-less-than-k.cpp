class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
int m  = grid.size();
int n = grid[0].size();
int ans=0;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
// prefix sum values from top, left, and diagonal
long long up = (i>0?grid[i-1][j]:0);
long long left = (j>0?grid[i][j-1]:0);
long long diag = (i>0 && j>0?grid[i-1][j-1]:0);

// convert current cell into prefix sum
grid[i][j] = grid[i][j] + up + left - diag;
// count if submatrix(0,0) -> (i,j) <= k
if(grid[i][j]<=k){
    ans++;
}

else{
    // if first column fails, no further rows will work
    if(j==0){
        return ans;
    }
    // stop checking further columns in this row
        break;
}
    }
}
return ans;
    }
};