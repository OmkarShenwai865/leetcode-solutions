class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
  int n = magazine.length();
  int m = ransomNote.length();
  vector<int>freq(26,0);
  //count chars in magazine
  for(int i=0;i<n;i++){
    freq[magazine[i]-'a']++;
  }

  //try to build ransomNote
  for(int i=0;i<m;i++){
    if(freq[ransomNote[i]-'a']==0){
        return false; //not enough chars
    }
    freq[ransomNote[i]-'a']--;
  }
  return true;
    }
};