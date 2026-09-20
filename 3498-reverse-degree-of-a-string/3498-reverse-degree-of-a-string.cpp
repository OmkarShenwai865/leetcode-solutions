class Solution {
public:
    int reverseDegree(string s) {
        int n = s.length();
        string hash = "";
        int idx = 26;
        for(int i='a';i<='z';i++){
            hash[i] = idx;
            idx--;
        }
        int sum = 0;
        for(int i=0;i<s.length();i++){
            sum = sum + hash[s[i]]*(i+1);
        }
return sum;
    }
};