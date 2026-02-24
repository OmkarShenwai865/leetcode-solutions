class Solution {
public:
void FindComb(int idx,int target,vector<int>& arr,vector<vector<int>>&ans,vector<int>&ds){
    if(target==0){
        ans.push_back(ds);
        return;
    }

    for(int i=idx;i<arr.size();i++){
    if(i>idx && arr[i]==arr[i-1]){ //skip duplicate combination
        continue;
    }
    if(arr[i]>target){
        break;
    }
    //pick current element
    ds.push_back(arr[i]);
    FindComb(i+1,target-arr[i],arr,ans,ds);
    //backtrack by removing last added element
    ds.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
sort(candidates.begin(),candidates.end());
vector<vector<int>>ans;
vector<int>ds;
FindComb(0,target,candidates,ans,ds);
return ans;
    }
};