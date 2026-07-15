class Solution {
public:
    int GCD(int a, int b){
        if(b==0) return a;

        return gcd(a,a%b);
    }
    int gcdOfOddEvenSums(int n) {
        int sumOdd = 0;
        int sumEven=0;
    for(int i=1;i<=2*n;i++){
    if(i%2!=0){
        sumOdd++;
    }
    else{
        sumEven++;
    }
    }
    int ans = GCD(sumOdd,sumEven);
    return ans;
    }
};