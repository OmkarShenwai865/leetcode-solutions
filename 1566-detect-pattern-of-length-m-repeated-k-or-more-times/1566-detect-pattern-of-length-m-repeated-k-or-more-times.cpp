class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
        int n = arr.size();
       for(int i=0;i+m*k<=n;i++){
        bool found = true;
        for(int j=i;j<i+m*(k-1);j++){
            if(arr[j]!=arr[j+m]){
                found = false;
                break;
            }
        }
        if(found){
            return true;
        }
       }
    return false;
    }
};