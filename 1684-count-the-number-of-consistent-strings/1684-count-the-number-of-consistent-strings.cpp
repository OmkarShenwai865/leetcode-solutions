class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
  int n = allowed.length();
  unordered_map<char,int>mpp;
  for(int i=0;i<n;i++){
    mpp[allowed[i]]++;
  }    
  int cnt=0;  
  for(int i=0;i<words.size();i++){
    string s = words[i];
    bool check=true;
    for(int j=0;j<s.length();j++){
    if(mpp.find(s[j])==mpp.end()){
        check=false;
        break;
    }
    }
    if(check) cnt++;
  }
  return cnt;
    }
};