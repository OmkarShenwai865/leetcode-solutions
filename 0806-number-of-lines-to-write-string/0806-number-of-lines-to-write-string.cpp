class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
int n, line = 1,sum = 0;
for(int i=0;i<s.size();i++){
    n = s[i] - 'a';
    sum += widths[n];
    if(sum>100){
        sum = 0;
        line++;
        sum += widths[n];
    }
}
return {line,sum};
    }
};