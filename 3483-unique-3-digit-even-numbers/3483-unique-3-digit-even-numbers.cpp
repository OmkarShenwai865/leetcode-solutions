class Solution {
public:
    int totalNumbers(vector<int>& digits) {
       int n = digits.size();
        set<int>st;
        for(int i=0;i<n;i++){ //hundreds
            for(int j=0;j<n;j++){ //tens
                for(int k=0;k<n;k++){ //ones
                    // same copy of digit cannot be used twice
                    if(i==j || j==k || i==k){
                        continue;
                    }
                    //no leading zeros
                    if(digits[i]==0){
                    continue;
                    }
                    //last digit must be even
                    if(digits[k]%2!=0){
                        continue;
                    }
                    int num = digits[i]*100 + digits[j]*10 + digits[k];
                    st.insert(num);
                }
            }
        }
        return st.size();
    }
};