class Solution {
public:
bool isVowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            return true;
        }
return false;
}
    string reverseWords(string s) {
int n = s.length();
int basecnt=0;
int i=0;
while(i<n && s[i]!=' '){
if(isVowel(s[i])){
    basecnt++;
}
    i++;
}


while(i<n){
    if(s[i]==' '){
        i++;
        continue;
    }
int cnt=0;
int start = i;
while(i<n && s[i]!=' '){
    if(isVowel(s[i])){
    cnt++;
    }
    i++;
}
int end = i-1;
if(cnt==basecnt){
    reverse(s.begin()+start,s.begin()+end+1);
}
}
return s;
        }
};


// Caused MLE
//         int n  = s.length();
//       vector<string>words;
//       string temp = "";
//       for(int i=0;i<n;i++){
//         if(s[i]==' '){
//             words.push_back(temp);
//             temp = "";
//         }
//        else{
//         temp = temp + s[i];
//        }
//       } 
//       words.push_back(temp);
// string check = "";
// int basecnt = 0;
//       for(int i=0;i<words[0].size();i++){
//     check = words[0];
//     if(check[i]=='a' || check[i]=='e' || check[i]=='i' || check[i]=='o' || check[i]=='u'){
// basecnt++;
//     }
//     }
//     for(int i=1;i<words.size();i++){
// int cnt=0;
// string clk = words[i];
// for(int j=0;j<words[i].size();j++){
//     if(clk[j]=='a' || clk[j]=='e' || clk[j]=='i' || clk[j]=='o' || clk[j]=='u') {
//         cnt++;
//     }
// }
//     if(cnt==basecnt){
//         reverse(words[i].begin(),words[i].end());
//     }
//     }
//     string ans = "";
//     for(int i=0;i<words.size();i++){
//         ans = ans + words[i] ;
//         if(i!=words.size()-1)
//         ans += " ";
//     }
//     return ans;
//     }
