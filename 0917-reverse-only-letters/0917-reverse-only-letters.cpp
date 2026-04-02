class Solution {
public:
bool isLetter(char ch) {
        return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
    }
string reversestr(string &s){
int start = 0;
int end = s.length() - 1;
while(start<=end){
            if (!isLetter(s[start])) {
                start++;
            }
            else if (!isLetter(s[end])) {
                end--;
            }
            else {
                swap(s[start], s[end]);
                start++;
                end--;
            }
}
return s;
}
    string reverseOnlyLetters(string s) {
    string ans = reversestr(s);
        return ans;
    }
};