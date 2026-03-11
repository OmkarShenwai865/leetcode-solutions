class Solution {
public:
string decToBin(int n) {
    string ans = "";

    while(n > 0) {
        ans = char('0' + (n % 2)) + ans;
        n /= 2;
    }

    return ans;
}

int binToDec(string bin) {
    int ans = 0;

    for(int i = 0; i < bin.size(); i++) {
        ans = ans * 2 + (bin[i] - '0');   // convert char to int
    }

    return ans;
}

    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
    string res = decToBin(n);
    for(int i=0;i<res.length();i++){
        res[i] = ((res[i] - '0')^1) + '0';
    }
int ans = binToDec(res);
return ans;
    }
};