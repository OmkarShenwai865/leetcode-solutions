class Solution {
public:
    static const int MOD = 1e9 + 7;

    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;

        vector<long long> up(m), down(m);
        vector<long long> prefUp(m), prefDown(m);
        vector<long long> newUp(m), newDown(m);

        // length = 2
        for (int i = 0; i < m; i++) {
            up[i] = i;
            down[i] = m - 1 - i;
        }

        for (int len = 3; len <= n; len++) {

            prefUp[0] = up[0];
            prefDown[0] = down[0];

            for (int i = 1; i < m; i++) {
                prefUp[i] = (prefUp[i - 1] + up[i]) % MOD;
                prefDown[i] = (prefDown[i - 1] + down[i]) % MOD;
            }

            long long totalUp = prefUp[m - 1];

            for (int i = 0; i < m; i++) {

                // previous move was DOWN
                newUp[i] = (i > 0 ? prefDown[i - 1] : 0);

                // previous move was UP
                newDown[i] = (totalUp - prefUp[i] + MOD) % MOD;
            }

            up.swap(newUp);
            down.swap(newDown);
        }

        long long ans = 0;

        for (int i = 0; i < m; i++) {
            ans = (ans + up[i] + down[i]) % MOD;
        }

        return (int)ans;
    }
};