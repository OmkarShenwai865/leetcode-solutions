class Solution {
public:
    void leftshiftrow(vector<int>&row,int k){
// 2nd method(Brute)
//    for(int i=0;i<k;i++){
    //reverse(beg,end),reverse(bg,beg+1)}
    int n = row.size();
    k = k%n;
    reverse(row.begin()+n-k,row.end());
    reverse(row.begin(),row.begin()+n-k);
    reverse(row.begin(),row.end());
//    }     
    }
    void rightshiftrow(vector<int>&row,int k){
        //2nd method(Brute)
    // for(int i=0;i<k;i++){
        //reverse(beg,end),reverse(beg+1,end)}
        int n = row.size();
        k = k%n;
        reverse(row.begin(),row.begin()+n-k);
        reverse(row.begin()+n-k,row.end());
        reverse(row.begin(),row.end());
    // }
    }
    bool areSimilar(vector<vector<int>>& mat, int k) {
    int n = mat.size();
    int m = mat[0].size();
    vector<vector<int>>ans = mat;
    for(int i=0;i<n;i++){
            if(i%2==0){
                rightshiftrow(ans[i],k);
            }
            else{
                leftshiftrow(ans[i],k);
            }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]!=ans[i][j]){
                return false;
            }
        }
    }
    return true;
    }
};