class Solution {
public:
    int countEven(int num) {
int cnt=0;
for(int i=1;i<=num;i++){
string ans = to_string(i);
int sum=0;
for(int i=0;i<ans.length();i++){
sum = sum + (ans[i]-'0');
}
if(sum%2==0){
    cnt++;
}
  }
  return cnt;   
    }
};