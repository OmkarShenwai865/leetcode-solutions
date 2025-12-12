class Solution {
public:
    string largestNumber(vector<int>& nums) {
  vector<string>ans;
  for(int i=0;i<nums.size();i++){
    ans.push_back(to_string(nums[i]));
  }  
  //custome comparator    
  sort(ans.begin(),ans.end(),[](const string &a,string &b){
    return (a+b)>(b+a);
  });
  //edge case
  if(ans[0]=="0"){
    return "0";
  }

  //largest number
  string larg;
  for(int i=0;i<ans.size();i++){
    larg += ans[i];
  }
  return larg;

    }
};