class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
  
        int n = code.size();
        vector<int> ans;

        unordered_map<string,int> pr = {
        {"electronics", 1},
            {"grocery", 2},
            {"pharmacy", 3},
            {"restaurant", 4}
        };

for (int i = 0; i < n; i++) {
            string currentCode = code[i];

            // Condition 3: isActive must be true
            if (!isActive[i]) continue;
            
            // Condition 2: businessLine must be one of the four valid categories
            if (pr.find(businessLine[i]) == pr.end()) continue;

            // Condition 1: code is non-empty
            if (currentCode.empty()) continue;

            // Condition 1: code consists only of alphanumeric characters and underscores
            bool isValidCharSet = true;
            for (char c : currentCode) {
                if (!((c >= 'A' && c <= 'Z') || 
                      (c >= 'a' && c <= 'z') || 
                      (c >= '0' && c <= '9') || 
                       c == '_')) {
                    isValidCharSet = false;
                    break;
                }
            }
            
            if (isValidCharSet) {
                ans.push_back(i);
            }
        }
        sort(ans.begin(), ans.end(), [&](int a, int b) {
            if (pr[businessLine[a]] != pr[businessLine[b]])
                return pr[businessLine[a]] < pr[businessLine[b]];
            return code[a] < code[b];
        });

        vector<string> res;
        for (int i : ans)
            res.push_back(code[i]);

        return res;
    }
};