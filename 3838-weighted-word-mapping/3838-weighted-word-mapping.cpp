class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
int n = words.size();
vector<char>alphabets;
for(char i = 'z';i>='a';i--){
    alphabets.push_back(i);
} 
string ans = "";
// int j=0;       
for(int i=0;i<n;i++){
string s = words[i];
int sum=0;
for(int k=0;k<s.size();k++){
sum = sum + weights[s[k]-'a'];
// j++;
}
int check = sum%26;
ans = ans + alphabets[check];
}
return ans;
    }
};