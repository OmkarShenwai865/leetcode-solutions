class Solution {
public:
    int maximumSum(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());

        vector<int> rem[3];

        for (int x : nums) {
            if (rem[x % 3].size() < 3)
                rem[x % 3].push_back(x);
        }

        int ans = 0;

        vector<int> cand;
        for (int i = 0; i < 3; i++)
            for (int x : rem[i])
                cand.push_back(x);

        int m = cand.size();

        for (int i = 0; i < m; i++) {
            for (int j = i + 1; j < m; j++) {
                for (int k = j + 1; k < m; k++) {
                    int sum = cand[i] + cand[j] + cand[k];
                    if (sum % 3 == 0)
                        ans = max(ans, sum);
                }
            }
        }

        return ans;
    }
};