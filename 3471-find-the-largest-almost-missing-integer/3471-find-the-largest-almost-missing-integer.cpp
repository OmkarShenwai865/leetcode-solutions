class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
      int n = nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<=n-k;i++){
            unordered_set<int>st;
            for(int j=i;j<i+k;j++){
                st.insert(nums[j]);
            }
            for(int x:st){
                mpp[x]++;
            }
        }
        int maxi =INT_MIN;
        for(auto it:mpp){
            if(it.second==1){
            maxi = max(maxi,it.first);
            }
        }
        if(maxi!=INT_MIN){
            return maxi;
        }
        return -1;
    }
};