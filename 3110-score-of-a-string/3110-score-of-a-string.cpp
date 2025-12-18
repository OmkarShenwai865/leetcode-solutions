class Solution {
public:
    int scoreOfString(string s) {
   int n = s.length();
   int diff = 0;
   for(int i=0;i<n-1;i++){
    
    diff = diff + abs((s[i]-'a')-(s[i+1]-'a'));
   } 
   return diff;    
    }
};