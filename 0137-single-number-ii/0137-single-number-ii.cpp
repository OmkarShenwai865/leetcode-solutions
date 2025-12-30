class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        int ans = 0;
        for(auto it:mpp){
            if(it.second == 1){
                ans = it.first;
            }
        }
        return ans;
    }
};