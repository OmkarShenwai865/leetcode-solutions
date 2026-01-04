class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;  // stores final answer

        for(int n : nums){    // take each number
            int cnt = 0;      // count of divisors
            int sum = 0;      // sum of divisors

            for(int i = 1; i * i <= n; i++){   // check till √n
                if(n % i == 0){                // if i is divisor
                    int d1 = i;
                    int d2 = n / i;

                    if(d1 == d2){              // perfect square case
                        cnt++;
                        sum += d1;
                    }
                    else{                      // pair of divisors
                        cnt += 2;
                        sum += d1 + d2;
                    }
                }
            }

            if(cnt == 4){                      // exactly 4 divisors
                ans += sum;
            }
        }
        return ans;
    }
};
