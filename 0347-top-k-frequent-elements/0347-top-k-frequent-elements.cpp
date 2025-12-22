class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
  int n = nums.size();

  unordered_map<int,int>mpp;
  vector<int>ans;
  for(int i=0;i<n;i++){
    mpp[nums[i]]++;
    }    
    // if(n==1){
    //     ans.push_back(nums[0]);
    //     return ans;
    // }
    // if(k==n){
    //     for(int i=0;i<n;i++){
    //         ans.push_back(nums[i]);
    //     }
    //     return ans;
    // }
    vector<pair<int,int>>freq;
  for(auto it:mpp){
freq.push_back({it.second,it.first}); //{frequency,number}
    }
    sort(freq.begin(),freq.end(),greater<>());
    for(int i=0;i<k;i++){
        ans.push_back(freq[i].second);
    }
   return ans; 
    }
};