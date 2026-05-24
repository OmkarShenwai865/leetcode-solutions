class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
    int n = nums.size();
    int sum=0;
    int digitsum=0;
    for(int i=0;i<n;i++){
    sum= sum+nums[i];
    if(nums[i]>9){
    string s = to_string(nums[i]);
    for(int j=0;j<s.length();j++){
        int digit = s[j] - '0';
        digitsum = digitsum + digit;
    }
    }
    else{
        digitsum = digitsum + nums[i];
    }
    }
return abs(sum-digitsum);
    }
};