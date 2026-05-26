class Solution {
public:
    int numberOfSpecialChars(string word) {
      unordered_map<char,int>mpp;
      int n = word.length();
      for(int i=0;i<n;i++){
        mpp[word[i]]++;
      }
      int cnt=0;
      for(char ch='a';ch<='z';ch++){
       if(mpp.find(ch)!=mpp.end() && mpp.find(toupper(ch))!=mpp.end()){
        cnt++;
       }
      }
      return cnt;
    }
};