class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int n = nums.size();
       int cnt=1;
       if(n==0){
        return 0;
       }
       sort(nums.begin(),nums.end());
       int maxi = 1;
       for(int i=1;i<n;i++){
        if((nums[i]-nums[i-1])==1){
            cnt++;
        }
        else if((nums[i]-nums[i-1])==0){
            continue;
        }
        else{
            cnt=1;
        }
        maxi = max(maxi,cnt);
       } 
       return maxi;
    }
};