class Solution {
public:
    int concatenatedBinary(int n) {
        const int mod = 1e9 + 7;
        int bitlength = 0;
        long long result = 0;
        for(int i=1;i<=n;i++){
            //if i is power of 2
            if((i & (i-1)) == 0){
                bitlength++;
            }
            //left shift and add next value
            result = ((result<<bitlength)%mod + i)%mod;
        }
        return result;
    }
};