int countPrimes(int n){
    if(n < 3) return 0;
        
    bool nonPrimes[n];
    memset(nonPrimes, false, sizeof(nonPrimes));
    int primecount = 1;
        
    for(long num = 3; num < n; num += 2) {
        if(nonPrimes[num]) continue;
        primecount ++;
        if(num*num < n) {
            for(long x = num*num; x < n; x += 2*num) nonPrimes[x] = true;
        }
    }
    return primecount;
}
