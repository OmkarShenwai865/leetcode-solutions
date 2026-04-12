class Solution {
public:
    int alternatingSum(vector<int>& nums) {
 int sum = 0;
 int sub = 0;
 for(int i=0;i<nums.size();i++){
    if(i%2==0){
        sum = sum + nums[i];
    }
    else{
        sub = sub + nums[i];
    }
 }       
 int ans = sum - sub;
 return ans;
    }
};