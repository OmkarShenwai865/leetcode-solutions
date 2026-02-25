class Solution {
public:
// void printsubs(int idx,vector<int>&ds,vector<int>nums,int n,vector<vector<int>>&ans){
//     if(idx>=n){
//         vector<int> res;
//         for(auto it:ds){
//             res.push_back(it);
//         }
//         ans.push_back(res);
//         return;
//     }
//     //take index
//     ds.push_back(nums[idx]);
//     printsubs(idx+1,ds,nums,n,ans);

//     //not take index
//     ds.pop_back();
//     printsubs(idx+1,ds,nums,n,ans);
// }
//     vector<vector<int>> subsets(vector<int>& nums) {
// int n = nums.size();
// vector<int>ds;
// vector<vector<int>>ans;
// printsubs(0,ds,nums,n,ans);
// return ans;
//     }
//     };


//2nd method
void findsubset(int idx,vector<int>& arr, vector<vector<int>>&ans,vector<int>&ds){
    ans.push_back(ds);
    for(int i=idx;i<arr.size();i++){
        ds.push_back(arr[i]);
        findsubset(i+1,arr,ans,ds);
        ds.pop_back();
    }
}


     vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>>ans;
    vector<int>ds;
    findsubset(0,nums,ans,ds);
    return ans; 
     }
     };