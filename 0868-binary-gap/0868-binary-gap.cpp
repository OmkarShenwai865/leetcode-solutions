class Solution {
public:
    int binaryGap(int n) {
int last=-1; //pos of prev 1
int maxgap = 0;
int pos = 0; //current pos

while(n>0){
    if(n&1){ //last bit was 1 then
    if(last!=-1){
        maxgap = max(maxgap,pos-last);
    }
    last = pos;
    }
    n = n >> 1;//right shift
    pos++;
}
return maxgap;
    }
};