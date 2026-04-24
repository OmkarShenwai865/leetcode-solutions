class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n = moves.length();
      int a1=0;
        for(int i=0;i<n;i++){
            if(moves[i]=='R' || moves[i]=='_'){
       a1 = a1+1;
        }
        else if(moves[i]=='L'){
       a1= a1-1;
        }
    }
    
    int a2=0;
       for(int i=0;i<n;i++){
            if(moves[i]=='L' || moves[i]=='_'){
            a2 = a2-1;
        }
        else if(moves[i]=='R'){
        a2 = a2+1;
        }
    }
    return max(abs(a1),abs(a2));
    }
};