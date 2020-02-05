class Solution {
public:
    int countPrimes(int n) {
        if(n < 3) return 0;
        
        int nonPrimes[n];
        memset(nonPrimes, 0, sizeof(nonPrimes));
        int primecount = 1;
        
        for(long num = 3; num < n; num = num + 2) {
            if(nonPrimes[num]) continue;
            primecount ++;
            if(num*num < n) {
                for(long x = num*num; x < n; x = x + 2*num) nonPrimes[x] = 1;
            }
        }
        return primecount;
    }
};
