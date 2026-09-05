class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
     int n = nums.size();
     int res = INT_MAX;
     //build prefixmax
     vector<int>prefixmax(n);
     prefixmax[0] = nums[0];
     for(int i=1;i<n;i++){
    prefixmax[i] = max(prefixmax[i-1],nums[i]);
     }

     //build suffixmin
     vector<int>suffixmin(n);
     suffixmin[n-1] = nums[n-1];
     for(int i=n-2;i>=0;i--){
        suffixmin[i] = min(suffixmin[i+1],nums[i]);
     }
     for(int i=0;i<n;i++){

    if((prefixmax[i]-suffixmin[i])<=k){
            return i;
     }
     }
     return -1;
    }
};