class Solution {
public:
    bool checkOnesSegment(string s) {
int n = s.length();
int cnt=0;
for(int i=0;i<n-1;i++){
    if(s[i]=='0' && s[i+1]=='1'){
      cnt++;
    }
}
if(cnt>0){
    return false;
}       
return true;
    }
};