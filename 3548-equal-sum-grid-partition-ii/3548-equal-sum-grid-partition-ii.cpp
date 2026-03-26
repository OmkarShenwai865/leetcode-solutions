class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& g) {
        int m = g.size(), n = g[0].size();
        long long total = 0;

        for (auto &r : g)
            for (int x : r)
                total += x;

        // 🔹 Horizontal cuts
        long long sum = 0;
        unordered_map<int,int> up, down;

        for (auto &r : g)
            for (int x : r)
                down[x]++;

        for (int i = 0; i < m - 1; i++) {
            for (int j = 0; j < n; j++) {
                int x = g[i][j];
                sum += x;
                up[x]++;
                if (--down[x] == 0) down.erase(x);
            }

            long long rem = total - sum;
            if (sum == rem) return true;

            long long d = abs(sum - rem);

            //  IMPORTANT FIX
            if (d > 100000) continue;

            // top bigger
            if (sum > rem && up.count(d)) {
                // 2D → always safe
                if (i + 1 > 1 && n > 1) return true;

                // 1D row
                if (i + 1 == 1) {
                    if (g[0][0] == d || g[0][n-1] == d)
                        return true;
                }

                // 1D col
                if (n == 1) {
                    if (g[0][0] == d || g[i][0] == d)
                        return true;
                }
            }

            // bottom bigger
            if (rem > sum && down.count(d)) {
                if (m - i - 1 > 1 && n > 1) return true;

                if (m - i - 1 == 1) {
                    if (g[i+1][0] == d || g[i+1][n-1] == d)
                        return true;
                }

                if (n == 1) {
                    if (g[i+1][0] == d || g[m-1][0] == d)
                        return true;
                }
            }
        }

        // 🔹 Vertical cuts
        sum = 0;
        unordered_map<int,int> left, right;

        for (auto &r : g)
            for (int x : r)
                right[x]++;

        for (int j = 0; j < n - 1; j++) {
            for (int i = 0; i < m; i++) {
                int x = g[i][j];
                sum += x;
                left[x]++;
                if (--right[x] == 0) right.erase(x);
            }

            long long rem = total - sum;
            if (sum == rem) return true;

            long long d = abs(sum - rem);

            //  IMPORTANT FIX
            if (d > 100000) continue;

            // left bigger
            if (sum > rem && left.count(d)) {
                if (m > 1 && j + 1 > 1) return true;

                if (j + 1 == 1) {
                    if (g[0][0] == d || g[m-1][0] == d)
                        return true;
                }

                if (m == 1) {
                    if (g[0][0] == d || g[0][j] == d)
                        return true;
                }
            }

            // right bigger
            if (rem > sum && right.count(d)) {
                if (m > 1 && n - j - 1 > 1) return true;

                if (n - j - 1 == 1) {
                    if (g[0][j+1] == d || g[m-1][j+1] == d)
                        return true;
                }

                if (m == 1) {
                    if (g[0][j+1] == d || g[0][n-1] == d)
                        return true;
                }
            }
        }

        return false;
    }
};