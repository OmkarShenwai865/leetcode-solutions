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
    int findComplement(int num) {
        string check = decToBin(num);
        for(int i=0;i<check.length();i++){
            check[i] = ((check[i]-'0') ^ 1 )+ '0';
        }
        int res = binToDec(check);
        return res;

    }
};