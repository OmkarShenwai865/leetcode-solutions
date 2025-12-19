class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
     int n = nums.size();
     sort(nums.begin(),nums.end());
    int target = 1;

    for(int i=0;i<n;i++){
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        if(nums[i]<=0){
            continue;
        }
        
        if(nums[i]==target){
            target++;
        }
        else{
            return target;
        }
    }
    return target;
    }
};