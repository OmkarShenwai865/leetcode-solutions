class Solution {
public:
    int numberOfChild(int n, int k) {
 // Ball repeats its path after 2*(n-1) seconds
  int pos = k % (2*(n-1));

// Move right if within the first half, otherwise move left
  if(pos<=n-1){
    return pos;
  }
  return 2*(n-1) - pos;
    }
};