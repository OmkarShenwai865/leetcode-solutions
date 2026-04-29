class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>rights;
        vector<int>lefts;
        for(int i=0;i<n-1;i++){
            int rightsum=0;
            for(int j=i+1;j<n;j++){
            rightsum = rightsum + nums[j];
            }
        rights.push_back(rightsum);
        }
        rights.push_back(0);

        for(int i=0;i<n;i++){
        int leftsum=0;
        for(int j =0;j<i;j++){
        leftsum = leftsum + nums[j];
        }
        lefts.push_back(leftsum);
        }
      
        vector<int>res;
    for(int i=0;i<n;i++){
res.push_back(abs(lefts[i]-rights[i]));
    }
    return res;
    }
};