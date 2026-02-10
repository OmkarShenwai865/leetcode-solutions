class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        int cnt=0;
        vector<int>temp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[j]<nums[i] && j!=i){
                    cnt++;
                }
            }
            if(cnt!=0){
            temp.push_back(cnt);
            cnt=0;
            }
            else{
                temp.push_back(0);
            }
        }
        return temp;
    }
};