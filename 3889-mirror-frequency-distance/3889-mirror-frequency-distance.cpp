class Solution {
public:
    int mirrorFrequency(string s) {
   int n = s.length();
   vector<int> freq(26,0);
   vector<int> freqdigit(10,0);
   int ans = 0;
   for(int i=0;i<n;i++){
    if(s[i]>='a' && s[i]<='z'){
    freq[s[i]-'a']++;
    }
    else if(s[i]>='0' && s[i]<='9'){
    freqdigit[s[i]-'0']++;
    }
   }
   //letters
   for(int i=0;i<freq.size();i++){
    int mindex = 25 - i;
    ans += abs(freq[i] - freq[mindex]);
   }
   //digits
   for(int i=0;i<freqdigit.size();i++){
    int mindex = 9-i;
    ans += abs(freqdigit[i] - freqdigit[mindex]);
   }
   return ans/2;     
    }
};