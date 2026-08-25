class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>st;
        int n = nums.size();
    for(int i=0;i<n;i++){
        st.insert(nums[i]);
    }
    int mul = 1;
    for(int i=0;i<=n;i++){
        int ans = k*mul;
        mul++;
        if(st.find(ans)==st.end()){
            return ans;
        }
    }
return -1;
    }
};