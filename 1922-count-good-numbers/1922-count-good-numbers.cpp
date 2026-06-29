class Solution {
public:
    long long power(long long base, long long exp, long long mod) {
            long long res = 1;
            base = base % mod;
            
            while (exp > 0) {
                if (exp % 2 == 1) { // If exp is odd
                    res = (res * base) % mod;
                }
                base = (base * base) % mod;
                exp /= 2;
            }
            return res;
    }


    int countGoodNumbers(long long n) {
         long long MOD = 1e9 + 7;
        
        long long even = (n + 1) / 2;
        long long odd = n / 2;
        
        long long even_ways = power(5, even, MOD);
        long long odd_ways = power(4, odd, MOD);
        
        return (even_ways * odd_ways) % MOD;
    }
};