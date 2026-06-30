class Solution {
public:
    int numberOfSubstrings(string s) {
 int n = s.length();
int i=0,j=0;
int count=0;
string ans = "";
unordered_map<char,int>mpp;
while(j<n){
mpp[s[j]]++;
while(mpp['a']>=1 && mpp['b']>=1 && mpp['c']>=1){
    count += (n-j);//means when we got a particular window containg a,b,c then the remaining char outside window will make up to more substring

    //shrinking the window
    mpp[s[i]]--;
    i++;
}
j++;
}   
return count;     
    }
};