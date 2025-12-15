class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int n = prices.size();
        long long cnt=1;
        long long len = 1;
        for(int i=1;i<n;i++){
            if(prices[i-1]-prices[i]==1){
                len++;
            }
            else{
               len=1; 
            }
            cnt += len;
        }
        return cnt;
    }
};