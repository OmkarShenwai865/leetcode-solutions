class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        int ans=0;
        for(int l=0;l<n;l++){
            int targetcnt = 0;
            for(int r=l;r<n;r++){
                if(nums[r]==target){
                    targetcnt++;
                }
            int len = r-l+1;
            if(targetcnt > len/2){
                ans++;
            } 
            }
        }
        return ans;
    }
};