class Solution {
public:
    int maxFreqSum(string s) {
       int n=s.length();
       unordered_map<char,int>mpp;
       for(int i=0;i<n;i++){
        mpp[s[i]]++;
       }
       int vowelfreq=0;
       int consfreq=0;
       for(auto it:mpp){
        if(it.first=='a' || it.first=='e' || it.first=='i' || it.first=='o' || it.first=='u'){
            vowelfreq = max(vowelfreq,it.second);
        }
        else{
            consfreq = max(consfreq,it.second);
        }
       }
return vowelfreq+consfreq;
    }
};