class Solution {
public:
    int maximumLengthSubstring(string s) {
     int n = s.length();
     int i=0;
     int j=0;
     unordered_map<char,int>mpp;
     int maxi = INT_MIN;
     while(j<n){
    mpp[s[j]]++;
    while(mpp[s[j]]>2){
        mpp[s[i]]--;
        i++;
    }
    maxi = max(maxi,j-i+1);
    j++;
     }   
     return maxi;
    }
};