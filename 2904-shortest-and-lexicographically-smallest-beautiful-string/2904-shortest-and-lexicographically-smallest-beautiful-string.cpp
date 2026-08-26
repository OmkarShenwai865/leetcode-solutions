class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        int j = 0;
        int cnt = 0;
        string ans = "";

        for (int i = 0; i < n; i++) {

            if (s[i] == '1') {
                cnt++;
            }

            while (cnt > k) {
                if (s[j] == '1') {
                    cnt--;
                }
                j++;
            }

            if (cnt == k) {

                // Remove leading zeroes
                while (s[j] == '0') {
                    j++;
                }

                string curr = s.substr(j, i - j + 1);

                if (ans == "" ||
                    curr.size() < ans.size() ||
                    (curr.size() == ans.size() && curr < ans)) {
                    ans = curr;
                }
            }
        }

        return ans;
    }
};