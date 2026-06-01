class Solution {
public:
    int minimumCost(vector<int>& cost) {
    int  n = cost.size();
    int sum=0;
    sort(cost.begin(),cost.end(),greater<int>());
    if(n<3){
        for(int i=0;i<n;i++){
            sum = sum + cost[i];
        }
    }
    else{
    int cnt=0;
for(int i=0;i<n;i++){
    cnt++;
    if(cnt<3){
        sum = sum+cost[i];
    }
    if(cnt==3){
cnt=0;
    }
}
    }
    return sum;
    }
};