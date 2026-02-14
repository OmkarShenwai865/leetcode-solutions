class Solution {
public:
    int maxArea(vector<int>& height) {
int n = height.size();
int l = 0;
int r = n-1;    
int maxarea = 0;
while(l<r){
    int h = min(height[l],height[r]); //smaller height
    int width = r - l;
    maxarea = max(maxarea,h*width); //current water stored
    if(height[l]<height[r]){
        l++;
    }
    else{
        r--;
    }
}
return maxarea;
    }
};