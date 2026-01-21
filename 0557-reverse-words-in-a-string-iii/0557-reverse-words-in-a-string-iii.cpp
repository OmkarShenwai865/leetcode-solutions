class Solution {
public:
    string reverseWords(string s) {
 int n = s.length();
 string res;
 int i=0;
string ans="";
while(i<n){
   while(i<n && s[i]==' '){
    i++;
   } 
   string word="";
   while(i<n && s[i]!=' '){
    word += s[i];
    i++;
   }
   reverse(word.begin(),word.end());

   if(!word.empty()){
    if(!res.empty()){
        res += " ";
    }
    res+=word;
   }
}
return res;
    }
};