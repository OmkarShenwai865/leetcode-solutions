class Solution {
public:
void printsubs(int idx,vector<int>&ds,vector<int>nums,int n,vector<vector<int>>&ans){
    if(idx>=n){
        vector<int> res;
        for(auto it:ds){
            res.push_back(it);
        }
        ans.push_back(res);
        return;
    }
    //take index
    ds.push_back(nums[idx]);
    printsubs(idx+1,ds,nums,n,ans);

    //not take index
    ds.pop_back();
    printsubs(idx+1,ds,nums,n,ans);
}
    vector<vector<int>> subsets(vector<int>& nums) {
int n = nums.size();
vector<int>ds;
vector<vector<int>>ans;
printsubs(0,ds,nums,n,ans);
return ans;
    }
    };