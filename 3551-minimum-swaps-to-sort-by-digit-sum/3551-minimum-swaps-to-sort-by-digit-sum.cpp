class Solution {
public:
    int digitsum(int n) {
        int ans = 0;
        while (n != 0) {
            ans += n % 10;
            n /= 10;
        }
        return ans;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<pair<int, int>> arr;

        for (int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end(), [&](auto &a, auto &b) {
            int ds1 = digitsum(a.first);
            int ds2 = digitsum(b.first);

            if (ds1 == ds2)
                return a.first < b.first;

            return ds1 < ds2;
        });

        vector<int> visited(n, 0);
        int swaps = 0;

        for (int i = 0; i < n; i++) {
            if (visited[i] || arr[i].second == i)
                continue;

            int cycle = 0;
            int j = i;

            while (!visited[j]) {
                visited[j] = 1;
                j = arr[j].second;
                cycle++;
            }

            swaps += cycle - 1;
        }

        return swaps;
    }
};