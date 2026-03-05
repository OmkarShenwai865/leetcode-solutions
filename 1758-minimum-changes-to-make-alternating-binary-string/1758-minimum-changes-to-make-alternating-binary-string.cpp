class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
        string a = "1";
        string b = "0";
    for(int i=1;i<n;i++){
        if(a[i-1]=='1'){
            a = a + "0";
        }
        else{
          a = a + "1";
        }
        if(b[i-1]=='0'){
            b = b + "1";
        }
        else{
            b = b + "0";
        }
    }
    int changeA=0;
    int changeB=0;
    for(int i=0;i<n;i++){
       if(s[i]!=a[i]){
        changeA++;
       }
       if(s[i]!=b[i]){
        changeB++;
       }
    }
    
     return min(changeA,changeB);
    }
};