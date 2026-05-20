class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
    int cnt=0;
    unordered_map<int,int>mpp;
    for(int i=0;i<A.size();i++){
        if(A[i]==B[i]){
            mpp[A[i]]+=2;
            cnt++;
        }
        else{
            mpp[A[i]]++;
            mpp[B[i]]++;
            if(mpp[A[i]]==2){
                cnt++;
            }
            if(mpp[B[i]]==2){
                cnt++;
            }
        }
        A[i] = cnt;
    }
    return A;
    }
};