class Solution {
public:
    char repeatedCharacter(string s) {
int n = s.length();

set<char>c;
for(int i=0;i<n;i++){
  if(c.find(s[i])!=c.end()){
    return s[i];
  }
  c.insert(s[i]);
}
return '-1';
    }
};