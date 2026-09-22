class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
      int n = nums.size();
      map<int,int>mpp;
      for(int i=0;i<n;i++){
        mpp[nums[i]]++;
      }
     for(auto it1=mpp.begin();it1!=mpp.end();++it1){
        for(auto it2=next(it1);it2!=mpp.end();++it2){
            if(it1->second != it2->second){
                return {it1->first,it2->first};
            }
        }
     }
     return {-1,-1};
      }
};