class Solution {
public:
    int GCD(int a,int b){
        if(b==0){
            return a;
        }
        return GCD(b,a%b);
    }
    int findGCD(vector<int>& nums) {
    int n = nums.size();
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        if(nums[i]>maxi){
            maxi = nums[i];
        }
        if(nums[i]<mini){
            mini = nums[i];
        }
    }    
    return GCD(maxi,mini);
    }
};