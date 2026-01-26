class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
 int n = arr.size();
 int mini = INT_MAX;
 sort(arr.begin(),arr.end());
 for(int i=1;i<n;i++){
  mini = min(mini,abs(arr[i]-arr[i-1]));
 }
  
     vector<vector<int>>ans;
     for(int i=1;i<n;i++){
        if(abs(arr[i]-arr[i-1])==mini){
            ans.push_back({arr[i-1],arr[i]});
        }
     }
     

return ans;
    }
};