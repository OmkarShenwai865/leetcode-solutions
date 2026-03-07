class Solution {
public:
    int minFlips(string s) {
     int n = s.length();
     string t = s+ s;  // simulate all rotations(duplicating)
     int m = t.size();

     string alt1="",alt2="";
     for(int i=0;i<m;i++){
     alt1 += (i%2 ? '1' : '0'); //101010..
     alt2 += (i%2? '0' : '1'); //010101..
     }
     int ans = INT_MAX;
     int diff1 = 0, diff2 = 0;
     for(int i=0;i<m;i++){

        //count mismatches
        if(t[i]!=alt1[i]) diff1++;
        if(t[i]!=alt2[i]) diff2++;

        //remove characters leaving sliding window
        if(i>=n){
            if(t[i-n]!=alt1[i-n]) diff1--;
            if(t[i-n]!=alt2[i-n]) diff2--;
        }
        //once window size == n check min flips
        if(i>=n-1){
    ans =  min(ans,min(diff1,diff2));
        }
     }
  return ans;
    }
};