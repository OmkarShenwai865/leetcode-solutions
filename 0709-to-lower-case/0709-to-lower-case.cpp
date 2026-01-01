class Solution {
public:
    string toLowerCase(string s) {
int n = s.length();
string b = "";
for(int i=0;i<n;i++){
char a = tolower(s[i]);
b = b + a;
}
return b;
    }
};