class Solution {
public:
    int maximumLength(vector<int>& nums) {
    int n = nums.size();
    int maxi = 1;
    unordered_map<long long,int>freq;
    for(int i=0;i<n;i++){
        freq[nums[i]]++;
    }
    for(int i=0;i<n;i++){
        long long cur = nums[i];
        if(cur==1){
            maxi = max(maxi,freq[1]%2==0?freq[1]-1:freq[1]);
            continue;
        }
        int len = 0;
        while(true){
            if (freq[cur] >= 2 && freq[cur * cur] > 0){
                len += 2;
            // Prevent overflow
            if (cur > 1000000000LL / cur)
                break;
            cur = cur*cur;
            }
            else if(freq[cur]>=1){
                len += 1;
                break;
            }
            else{
                len -= 1;
                break;
            }
        }
        maxi = max(maxi,len);
    }
    return maxi;
    }
};