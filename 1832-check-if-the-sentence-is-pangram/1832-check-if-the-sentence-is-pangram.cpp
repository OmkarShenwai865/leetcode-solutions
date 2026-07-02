class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int>mpp;
        int n = sentence.length();
        for(int i=0;i<n;i++){
            mpp[sentence[i]]++;
        }
    for(int i='a';i<='z';i++){
        if(mpp[i]<1){
            return false;
        }
    }
    return true;
    }
};