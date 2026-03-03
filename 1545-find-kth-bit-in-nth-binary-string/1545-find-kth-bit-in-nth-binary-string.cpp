class Solution {
public:
    string invert(string s){
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                s[i] = '1';
            }
            else{
                s[i] = '0';
            }
        }
        return s;
    }
    char findKthBit(int n, int k) {
        string ans = "0"; //s1
        for(int i=2;i<=n;i++){
            string temp = ans;
            string invertstr = invert(temp);
            reverse(invertstr.begin(),invertstr.end());
            ans = temp + "1" + invertstr;
        }
        return ans[k-1];
    }
};