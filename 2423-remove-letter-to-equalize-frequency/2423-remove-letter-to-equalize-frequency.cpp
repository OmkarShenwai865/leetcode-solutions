class Solution {
public:
    bool equalFrequency(string word) {
     unordered_map<char,int>mpp;
     int n  = word.size();
     for(int i=0;i<n;i++){
        mpp[word[i]]++;
     } 
    for(auto it:mpp){
        char ch = it.first;
        mpp[ch]--;

        int freq = -1;
        bool valid = true;

        for(auto x:mpp){
            if(x.second==0) continue;
            if(freq==-1) freq = x.second;

            else if(x.second!=freq){
                valid = false;
                break;
            }
        }
        mpp[ch]++;
        if(valid) return true;
    }
    return false;
    }
};