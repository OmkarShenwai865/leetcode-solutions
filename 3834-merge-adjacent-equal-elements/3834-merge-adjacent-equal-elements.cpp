class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
    int n = nums.size();
        vector<int>check(nums.begin(),nums.end());
        vector<long long>ans;
        for(int i=0;i<n;i++){
            ans.push_back(check[i]);
            //keep merging last two if equal
            while(ans.size()>=2){
                int m = ans.size();
                if(ans[m-1] == ans[m-2]){
                    long long sum = ans[m-1]+ans[m-2];
                    ans.pop_back();
                    ans.pop_back();
                    ans.push_back(sum);
                }
                else{
                    break;
                }
            }
        }
   
        return ans;
    }
};