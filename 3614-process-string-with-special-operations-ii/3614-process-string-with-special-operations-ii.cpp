class Solution {
public:
    char processStr(string s, long long k) {
       int n= s.length();
       vector<long long>sz(n);
       long long len=0;
       for(int i=0;i<n;i++){
        if(islower(s[i])){
            len++;
        }
        else if(s[i]=='#'){
            len = min(len*2,(long long)4e18);
        }
        else if(s[i]=='*'){
            if(len>0)
            len--;
        }
        sz[i] = len;
       }

       if(k>=len) return '.';

       for(int i=n-1;i>=0;i--){
        long long curlen = sz[i];
        if(islower(s[i])){
            if(k==curlen-1) return s[i];
        }
        else if(s[i]=='#'){
            k = k % (curlen/2);
        }
        else if(s[i]=='%'){
            k = curlen-1-k;
        }
       }
       return '.';
    }
};