class Solution {
public:
    vector<int> getBiggestThree(vector<vector<int>>& grid) {
     int n = grid.size();
     int m = grid[0].size();
     set<int>st;
     for(int r=0;r<n;r++){
        for(int c=0;c<m;c++){
            st.insert(grid[r][c]);
            for(int k=1; ;k++){
                if(r+2*k>=n || c-k<0 ||c+k>=m) break; 
                int sum=0;

                //top
                for(int i=0;i<k;i++){
                    sum += grid[r+i][c-i]; 
                }
                //left
                for(int i=0;i<k;i++){
                    sum += grid[r+k+i][c-k+i]; 
                }
                //bottom
                 for(int i=0;i<k;i++){
                    sum += grid[r+2*k-i][c+i]; 
                }
                //right
                 for(int i=0;i<k;i++){
                    sum += grid[r+k-i][c+k-i]; 
                }
                st.insert(sum);
            }
        }
     }   
     vector<int>ans;
     auto it= st.rbegin();

     for(int i=0;i<3 && it!=st.rend();i++,it++){
        ans.push_back(*it);
     }
     return ans;
    }
};