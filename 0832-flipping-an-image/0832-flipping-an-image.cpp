class Solution {
public:
void revninvert(vector<int>&arr){
    reverse(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            arr[i] = 1;
        }
        else{
            arr[i] = 0;
        }
    }
}
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    int m = image.size();
    int n = image[0].size();
    vector<vector<int>>ans;
    for(int i=0;i<m;i++){
        vector<int>res;
        for(int j=0;j<n;j++){
        res.push_back(image[i][j]);
        }
        revninvert(res);
        ans.push_back(res);
    }     
    return ans;
    }
};