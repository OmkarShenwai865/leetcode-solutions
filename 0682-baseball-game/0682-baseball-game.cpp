class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        vector<int>ans;
    for(int i=0;i<n;i++){
        if(operations[i]=="D"){
            if(i!=0){
            int s = (ans.back())*2;
            ans.push_back(s);
            }
        }
        else if(operations[i]=="+"){
            int size = ans.size();
            int sum = ans[size-1] + ans[size-2];
            ans.push_back(sum);
        }
        else if(operations[i]=="C"){
            ans.pop_back();
        }
        else{
            int val  = stoi(operations[i]);
            ans.push_back(val);
        }
    }
    int final=0;
    for(int i=0;i<ans.size();i++){
        final = final + ans[i];
    }
    return final;
        }
};