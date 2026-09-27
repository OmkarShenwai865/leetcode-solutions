class Solution {
public:
    string reverseParentheses(string s) {
        int n = s.length();
        int i=0;
        string curr="";
       stack<string>st;
       while(i<n){
        if(s[i]=='('){
        st.push(curr);
        curr = "";
        }
        else if(s[i]==')'){
        reverse(curr.begin(),curr.end());
        curr = st.top() + curr;
        st.pop();
        }
        else{
            curr = curr + s[i];
        }
        i++;
       }
return curr;
    }
};