class Solution {
public:
int numlength(int n){
  int cnt = 0;
        while (n != 0) {
            cnt++;
            n /= 10;
        }

        return cnt;
    }

    int countCommas(int n) {
        int ans=0;
        for(int i=1;i<=n;i++){
            if(numlength(i)>=4){
                ans++;
            }
        }
        return ans;
    }
};