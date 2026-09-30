class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
     map<int,int>mpp;
     for(int i=0;i<n;i++){
        mpp[nums[i]]++;
     }   
     vector<int>ans;
     while(!mpp.empty()){
    for(auto it=mpp.begin();it!=mpp.end();){
        ans.push_back(it->first);
        it->second--;
        
        if(it->second==0){
            it = mpp.erase(it);
        }
        else{
            it++;
        }
    }
     }
     return ans;
    }
};