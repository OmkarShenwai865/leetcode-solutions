class Solution {
public:
    map<string, string> mp;

    string check(string& one) {
        if(mp.find(one) != mp.end())
            return mp[one];

        return "?";
    }

    string evaluate(string s, vector<vector<string>>& knowledge) {

        for(int i = 0; i < knowledge.size(); i++) {
            mp[knowledge[i][0]] = knowledge[i][1];
        }

        int n = s.length();
        int i = 0;
        string ans = "";

        while(i < n) {

            if(s[i] == '(') {
                i++;

                string temp = "";

                while(s[i] != ')') {
                    temp += s[i];
                    i++;
                }

                ans += check(temp);
            }
            else {
                ans += s[i];
            }

            i++;
        }

        return ans;
    }
};