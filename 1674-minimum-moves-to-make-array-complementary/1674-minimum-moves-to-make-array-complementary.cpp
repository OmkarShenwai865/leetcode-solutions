class Solution {
public:
    int minMoves(vector<int>& nums, int limit) {
    int n = nums.size();
    vector<int>diff(2*limit+2,0);
    for(int i=0;i<n/2;i++){
        int a = nums[i];
        int b = nums[n-1-i];
        int low = min(a,b)+1;
        int high = max(a,b)+limit;
        int sum = a+b;
        //initially assume 2 moves for all sums
        diff[2] += 2;

        //one move possible in [low,high]
        diff[low]-=1;
        diff[high+1]+=1;

        //zero move at exact sum
        diff[sum]-=1;
        diff[sum+1]+=1;
    }
    int ans = INT_MAX;
    int currmove = 0;
    //prefix sum to compute total moves for each target sum
    for(int i=2;i<=2*limit;i++){
        currmove += diff[i];
        ans = min(ans,currmove);
    }
    return ans;
    }
};