class Solution {
public:
    string dectobin(int n){
string binary = "";
for(int i=31;i>=0;i--){
    binary += ((n>>i) & 1) + '0'; //forced 32 bits
}
return binary;
    }
    int reverseBits(int n) {
   string s = dectobin(n);
    reverse(s.begin(),s.end());
    return stoi(s,nullptr,2);
    }
};