class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
       int n = intervals.size();

        sort(intervals.begin(), intervals.end());

        vector<int> starts;

        for (auto &interval : intervals) {
            starts.push_back(interval[0]);
        }

        long long cnt = 0;

        for (int i = 0; i < n; i++) {
            int pos = upper_bound(starts.begin() + i + 1,
                                  starts.end(),
                                  intervals[i][1]) - starts.begin();

            cnt += pos - (i + 1);
        }

        return cnt;
    }
};