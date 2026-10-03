class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
       int n = candyType.size();

       unordered_map<int,int>mpp;
       for(int i=0;i<n;i++){
        mpp[candyType[i]]++;
       } 
    return min((int)mpp.size(),n/2);
    }
};