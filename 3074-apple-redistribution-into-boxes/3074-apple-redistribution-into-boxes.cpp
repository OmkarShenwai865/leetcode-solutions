class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
       int n = apple.size();
       int m = capacity.size();
    int appletotal = 0;
      for(int i=0;i<n;i++){
        appletotal += apple[i];
      }  
      int cnt=0;
      sort(capacity.begin(),capacity.end());
      for(int i=m-1;i>=0;i--){
        appletotal = appletotal - capacity[i];
        cnt++;
        if(appletotal<=0){
            break;
        }
      }
    return cnt;
    }
};