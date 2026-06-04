class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int cnt=0;

    for(int i=num1;i<=num2;i++){
    string ans = to_string(i);
    int n = ans.length();
    for(int j=1;j<n-1;j++){
    if(ans[j]>ans[j-1] && ans[j]>ans[j+1]){
        cnt++;
    }
    else if(ans[j]<ans[j-1] && ans[j]<ans[j+1]){
        cnt++;
    }
    } 
    }
return cnt;
    
    }
};