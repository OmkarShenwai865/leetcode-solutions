class Solution {
public:
void genhappystring(string &s,int n,vector<string>&ans){
    if(s.length()==n){
        ans.push_back(s);
        return;
    }

    for(char ch='a';ch<='c';ch++){
    if(s.empty()||s.back()!=ch){
        s.push_back(ch);
        genhappystring(s,n,ans);
        s.pop_back();
    }
    }
}
    string getHappyString(int n, int k) {
        vector<string>ans;
        string s = "";
        genhappystring(s,n,ans);
        sort(ans.begin(),ans.end());
        if(ans.size()<k) return "";
        return ans[k-1];
    }
};