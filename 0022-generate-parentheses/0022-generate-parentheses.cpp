class Solution {
public:
void genparenth(int n,int left,int right,vector<string>&ans,string &temp){
    if(left + right == 2*n){
        ans.push_back(temp);
        return;
    }

    //left parenthesis
    if(left<n){
        temp.push_back('(');
        genparenth(n,left+1,right,ans,temp);
        temp.pop_back();
    }
    //right parenthesis
    if(right<left){
        temp.push_back(')');
        genparenth(n,left,right+1,ans,temp);
        temp.pop_back();
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp;
        genparenth(n,0,0,ans,temp);
        return ans;
    }
};