class Solution {
public:
    int minimumDeletions(string s) {
//left mai saare a's hone chahiye
//right mai saare b's hone chahiye
  int n = s.length();
  int boccur = 0;
  int remove = 0;
  for(int i=0;i<n;i++){
    if(s[i]=='b'){
        boccur++;
    }
    else{
        //s[i] == 'a'
        //delete this a or delete all previous b's
        remove = min(remove+1,boccur);
    }
  }
  return remove;
    }
};