class Solution {
public:
void recPerm(vector<vector<int>>&ans,vector<int>&ds,vector<int>&nums,vector<int> &freq){
    if(ds.size()==nums.size()){
        ans.push_back(ds);
        return;
    }
    for(int i=0;i<nums.size();i++){
        if(!freq[i]){ //if not mapped
    ds.push_back(nums[i]);
    freq[i] = 1; //mark picked
    recPerm(ans,ds,nums,freq);
    freq[i] = 0; //mark unpicked
    ds.pop_back();
        }   
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
 int n=nums.size();
 vector<vector<int>>ans;
 vector<int>ds;
 vector<int>freq(n,0);
recPerm(ans,ds,nums,freq);
return ans;
    }
};