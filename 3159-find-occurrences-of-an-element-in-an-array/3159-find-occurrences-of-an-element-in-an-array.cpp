class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
int n = nums.size();
int m = queries.size();
unordered_map<int,vector<int>>mpp;
// Store all positions
for(int i=0;i<n;i++){
mpp[nums[i]].push_back(i);
}
vector<int>ans;
for(int i=0;i<m;i++){
    int k = queries[i];
    if(mpp[x].size()<k){
        ans.push_back(-1);
    }
    else{
        ans.push_back(mpp[x][k-1]); //class Solution {
}     
}
return ans;
    }
};