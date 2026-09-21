class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int m = intervals.size();
        int n = intervals[0].size();
        int cnt=0;
        for(int i=0;i<m-1;i++){
            for(int j=i+1;j<m;j++){
                if(max(intervals[i][0],intervals[j][0]) <= min(intervals[i][1],intervals[j][1])){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};