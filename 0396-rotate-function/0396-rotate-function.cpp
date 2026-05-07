class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        long long f0 = 0;

        // Initial sum and F(0)
        for(int i = 0; i < n; i++) {
            sum += nums[i];
            f0 += (long long)i * nums[i];
        }

        long long maxi = f0;
        long long curr = f0;

        // Calculate next rotations
        for(int k = 1; k < n; k++) {
            curr = curr + sum - (long long)n * nums[n - k];
            maxi = max(maxi, curr);
        }

        return (int)maxi;
    }
};