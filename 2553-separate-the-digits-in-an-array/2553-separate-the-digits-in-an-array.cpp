class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
  int n = nums.size();
  vector<int>ans;
  for(int i=0;i<n;i++){
    string res = to_string(nums[i]);
    for(int i=0;i<res.length();i++){
        ans.push_back(res[i]-'0');
    }
  } 
  return ans;  
    }
};