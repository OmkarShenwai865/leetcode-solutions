class Solution {
public:
    string reverses(string s){
        reverse(s.begin(),s.end());
        return s;
    }
    string duplicate(string s){
        int n = s.length();
        string c = s;
        for(int i=0;i<n;i++){
            c.push_back(s[i]);
        }
        return c;
    }
    string processStr(string s) {
        int n = s.length();
        string result;
        for(int i=0;i<n;i++){
            if(islower(s[i])){
                result.push_back(s[i]);
            }
            else if(s[i]=='*' && !result.empty()){
                result.pop_back();
            }
            else if(s[i]=='#'){
                result = duplicate(result);
            }
            else if(s[i]=='%'){
            result = reverses(result);   
            }
        }
        return result;
    }
};