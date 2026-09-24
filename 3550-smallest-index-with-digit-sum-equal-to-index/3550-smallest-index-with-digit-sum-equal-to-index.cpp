class Solution {
public:
int sumdigit(int n){
    int sum=0;
    while(n!=0){
        int digit = n%10;
        sum = sum + digit;
        n = n/10;
    }
    return sum;
}
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(sumdigit(nums[i])==i){
                return i;
            }
        }
        return -1;
    }
};