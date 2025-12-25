class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        int n = happiness.size();
        // Step 1: Sort the happiness values in descending order
        // So that we always pick the person with maximum happiness first
        sort(happiness.begin(),happiness.end(),greater<int>());
        long long select = 0; // This will store the final maximum happiness sum
        long long dec = 0;    // How many people we have already selected

        // Step 2: Pick first k people
    for(int i=0;i<k;i++){
          // After selecting 'dec' people, current happiness reduces by 'dec'
        long long val = happiness[i] - dec;
          // Happiness cannot go below 0
        if(val<0) val = 0;
        
        // Add to the answer
        select = select + val;
        // Increase count of selected people
        dec++; 
    }
    return select; // Return maximum total happiness
    }
};