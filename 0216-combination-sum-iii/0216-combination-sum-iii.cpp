class Solution {
public:
void FindComb(int i,int k,int n,vector<vector<int>>&ans,vector<int>&ds){
    if(n==0 && ds.size()==k){
        ans.push_back(ds);
        return;
    }
    if(i>9 || n<0 || ds.size()>k){
        return;
    }
    //pick current 
    ds.push_back(i);
    FindComb(i+1,k,n-i,ans,ds);
    ds.pop_back();
    
    //not pick
    FindComb(i+1,k,n,ans,ds);

}
    vector<vector<int>> combinationSum3(int k, int n) {
vector<vector<int>>ans;
vector<int>ds;
FindComb(1,k,n,ans,ds);
return ans;        
    }
};