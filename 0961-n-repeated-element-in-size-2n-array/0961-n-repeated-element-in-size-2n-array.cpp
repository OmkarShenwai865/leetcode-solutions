class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
  int n = nums.size();
    unordered_map<int,int>mpp;
    int ans = 0;
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
    }  
  for(auto it:mpp){
    if(it.second>1){
ans = it.first;
    }
  }
  return ans;
    }
};