class Solution {
public:
    int maxBuilding(int n, vector<vector<int>>& restrictions) {
    // Building 1 must have height 0
    restrictions.push_back({1,0});

    // Without any restriction, building n can be at most n-1
    restrictions.push_back({n,n-1});

    //sort by building index
    sort(restrictions.begin(),restrictions.end());
    int m = restrictions.size();
    //left -> right pass and ensure h[i]<=h[i-1]+dist
    for(int i=1;i<m;i++){
        long long dist = restrictions[i][0] - restrictions[i-1][0];
        restrictions[i][1] = min(restrictions[i][1],restrictions[i-1][1]+(int)dist);
    }
    //Right->left pass and ensure h[i]<=h[i+1]+dist
    for(int i=m-2;i>=0;i--){
    long long dist = restrictions[i+1][0] - restrictions[i][0];
    restrictions[i][1] = min(restrictions[i][1],restrictions[i+1][1]+(int)dist);
    }
    long long ans = 0;
    //find maximum peak between every adjacent restrictions pairs
    for(int i=1;i<m;i++){
        long long x1 = restrictions[i-1][0];
        long long h1 = restrictions[i-1][1];

        long long x2 = restrictions[i][0];
        long long h2 = restrictions[i][1];
        long long d = x2 - x1;

        //Maximum possible peak in this segement
        long long peak = (h1+h2+d)/2;
        ans = max(ans,peak);
    }
    return (int)ans;
    }
};