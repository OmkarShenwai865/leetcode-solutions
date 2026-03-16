class Fancy {
public:
vector<long long> arr;
long long MOD = 1000000007LL;

long long mul = 1; // global multiplication factor
long long add = 0; // global addition factor

// modular inverse using fast exponentiation
long long modInverse(long long x) {
    long long res = 1, p = MOD - 2;
    while (p) {
        if (p & 1) res = (res * x) % MOD;
        x = (x * x) % MOD;
        p >>= 1;
    }
    return res;
}

Fancy() {}

void append(int val) {
    // store value after reversing current transformation
    long long inv = modInverse(mul);
    long long v = ((val - add + MOD) % MOD * inv) % MOD;
    arr.push_back(v);
}

void addAll(int inc) {
    // update global addition
    add = (add + inc) % MOD;
}

void multAll(int m) {
    // update global multiplication and addition
    mul = (mul * m) % MOD;
    add = (add * m) % MOD;
}

int getIndex(int idx) {
    if (idx >= arr.size()) return -1;

    // apply transformation when retrieving
    return (arr[idx] * mul % MOD + add) % MOD;
}
};

/**
 * Your Fancy object will be instantiated and called as such:
 * Fancy* obj = new Fancy();
 * obj->append(val);
 * obj->addAll(inc);
 * obj->multAll(m);
 * int param_4 = obj->getIndex(idx);
 */