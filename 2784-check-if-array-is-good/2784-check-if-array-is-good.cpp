class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        vector<int> freq(n, 0);
        int maxi = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (nums[i] >= n || nums[i] <= 0) return false;
            freq[nums[i]]++;
            maxi = max(maxi, nums[i]);
        }

        if (freq[maxi] != 2 || maxi != n - 1) {
            return false;
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] != maxi && freq[nums[i]] > 1) {
                return false;
            }
        }

        return true;
    }
};