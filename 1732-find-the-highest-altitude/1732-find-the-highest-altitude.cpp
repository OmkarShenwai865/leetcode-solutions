class Solution {
public:
    int largestAltitude(vector<int>& gain) {
     int n = gain.size();
    vector<int>altitude;
    altitude.push_back(0);
    for(int i=0;i<n;i++){
       int sum = altitude[i] + gain[i];
       altitude.push_back(sum);
    }  
    int maxi = INT_MIN;
    for(int i=0;i<altitude.size();i++){
    if(altitude[i]>maxi){
        maxi = altitude[i];
    }
    }
    return maxi;
    }
};