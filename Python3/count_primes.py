class Solution:
    def countPrimes(self, n: int) -> int:
        if n < 3: return 0
        
        nonPrimes = [0] * n
        primecount = 1
        
        for num in range(3, n, 2):
            if nonPrimes[num]: continue
            primecount += 1
            if num*num < n:
                for x in range(num*num, n, 2*num):
                    nonPrimes[x] = 1
        
        return primecount
