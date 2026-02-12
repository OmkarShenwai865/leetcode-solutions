class Solution {
public:
    bool isfreqsame(vector<int>&freq){
    int val = 0;
    for(int n:freq){
        if(n==0) continue; //0 count
        if(val==0){  //first time freq note
            val = n;
        }
        else if(val!=n){ //if freq not same
            return false;
        }
    }
    return true;
}
    int longestBalanced(string s) {
int n = s.length();
int ans=0;
for(int i=0;i<n;i++){
    vector<int>freq(26,0);
    for(int j=i;j<n;j++){
        char ch = s[j];
        freq[ch-'a']++;

        if(isfreqsame(freq)){
         ans = max(ans,j-i+1);   
        }
    }
}
return ans;
    }
};