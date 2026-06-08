class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
     int n = nums.size();
     vector<int>small;
     vector<int>mid;
     vector<int>large;
     for(int i=0;i<n;i++){
      if(nums[i]<pivot){
        small.push_back(nums[i]);
      }  
      else if(nums[i]>pivot){
        large.push_back(nums[i]);
      }
      else{
        mid.push_back(nums[i]);
      }
     }
     vector<int>ans;
    for(int i=0;i<small.size();i++){
         ans.push_back(small[i]);
    } 
    for(int i=0;i<mid.size();i++){
        ans.push_back(mid[i]);
    }
    for(int i=0;i<large.size();i++){
        ans.push_back(large[i]);
    }
    for(int i=0;i<n;i++){
        nums[i] = ans[i];
    }
    return nums;
    }
};