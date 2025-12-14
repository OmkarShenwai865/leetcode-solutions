class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
long long prefsum = 0;
long long ans = LLONG_MIN;
int n = nums.size();
unordered_map<int,long long>mpp;
mpp[0] = 0; //base case

for(int i=0;i<n;i++){
prefsum = prefsum + nums[i];

int r = (i+1)%k;
if(mpp.find(r) != mpp.end()){
    ans = max(ans,prefsum - mpp[r]);
}
else{
    mpp[r] = prefsum;
}
mpp[r] = min(mpp[r],prefsum);
}
return ans;
    }
};