class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
     // Build heights (consecutive 1s column-wise)
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==1){
    // Convert to histogram: increase height using previous row
                matrix[i][j] += matrix[i-1][j]; 
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            vector<int>rows = matrix[i];
            sort(rows.begin(),rows.end(),greater<int>());

     // Try each width (j+1) with height row[j]
     //area = height * width
            for(int j=0;j<m;j++){
                ans = max(ans, rows[j] * (j+1));
            }
        }
        return ans;
    }
};