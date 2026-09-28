class Solution {
public:
    int maxDepth(string s) {
int n = s.length();
int leftcount=0;
int ans=0;
int rightcount=0;
for(auto x:s){
    if(x== '('){
        leftcount++;
    }
    else if(x==')'){
        rightcount++;
    }
ans = max(ans,leftcount-rightcount);
}
return ans;
    }
};