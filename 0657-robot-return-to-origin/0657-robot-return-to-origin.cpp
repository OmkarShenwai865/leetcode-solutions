class Solution {
public:
    bool judgeCircle(string moves) {
     int n = moves.length();
     int a=0,b=0;
    for(int i=0;i<n;i++){
        if(moves[i]=='U'){
            a--;
        }
        else if(moves[i]=='D'){
            a++;
        }
        else if(moves[i]=='R'){
            b++;
        }
        else if(moves[i]=='L'){
            b--;
        }
     }
     if(a==0 && b==0){
        return true;
     }   
     return false;
    }
};