class Solution {
public:
int count1bits(int n){
       int cnt = 0;
        while(n > 0){
            if(n % 2 == 1)
                cnt++;
            n = n / 2;
        }
        return cnt;
}
    vector<int> sortByBits(vector<int>& arr) {
vector<pair<int,int>> temp;   // {bitCount, value}

        // Step 1: Traverse and store counts
        for(int i = 0; i < arr.size(); i++){
            int bits = count1bits(arr[i]);
            temp.push_back({bits, arr[i]});
        }

        // Step 2: Sort by bit count, then value automatically
        sort(temp.begin(), temp.end());

        // Step 3: Extract sorted values
        vector<int> result;
        for(int i = 0; i < temp.size(); i++){
            result.push_back(temp[i].second);
        }

        return result;
   }
};