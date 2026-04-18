class Solution {
public:
    int mirrorDistance(int n) {
int ans=0;
int num = n;
while(num!=0){
    int digit = num%10;
    ans = ans*10 + digit;
    num = num/10;
}     
return abs(n-ans);
    }
};