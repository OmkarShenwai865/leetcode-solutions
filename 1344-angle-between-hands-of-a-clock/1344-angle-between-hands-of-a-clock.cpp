class Solution {
public:
    double angleClock(int hour, int minutes) {
        hour %= 12; // convert 12 -> 0
        double ans = abs((30*hour) - (5.5*minutes));  // angle diff
        return min(ans,360-ans); // smaller angle
    }
};