class Solution {
public:
    long long mod = 1e9 + 7;
    long long power(long long a, long long b) {
        long long res = 1;
        while (b) {
            if (b & 1) res = res * a % mod;
            a = a * a % mod;
            b /= 2;
        }
        return res;
    }
    int numberOfSets(int n, int k) {
        int N = n + k - 1, r = 2 * k;
        long long num = 1, den = 1;
        for (int i = 1; i <= r; i++) {
            num = num * (N - i + 1) % mod;
            den = den * i % mod;
        }
        return num * power(den, mod - 2) % mod;
    }
};