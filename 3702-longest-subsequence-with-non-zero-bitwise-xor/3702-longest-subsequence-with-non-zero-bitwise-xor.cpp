class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int ans=0;
        // Find total XOR
       for(int i=0;i<n;i++){
        ans = ans ^ nums[i];
       }
         // Entire array is valid
       if(ans!=0){
        return n;
       }
        // Remove one non-zero element
       for(int i=0;i<n;i++){
    if(nums[i]!=0){
        return n-1;
    }
       }
       return 0;
    }
};