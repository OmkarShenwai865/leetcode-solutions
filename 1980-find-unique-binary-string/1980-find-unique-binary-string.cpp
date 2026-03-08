class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
    string ans = "";

    for(int i=0;i<nums.size();i++){
         // check diagonal element
        if(nums[i][i]=='0'){
            ans += '1';  //flip '0' -> '1'
        }
        else{
            ans +='0';   //flip '1'->'0'
        }
    }
    return ans;
    }
};