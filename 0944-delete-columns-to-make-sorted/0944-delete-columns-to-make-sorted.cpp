class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
    int m = strs.size();
    int n = strs[0].size();
    int cnt=0;
    for(int i=0;i<n;i++){ //column
        for(int j=0;j<m-1;j++){ //rows
            if(strs[j][i]>strs[j+1][i]){
                cnt++;
                break;
            }
        }
    }
    return cnt;
    }
};