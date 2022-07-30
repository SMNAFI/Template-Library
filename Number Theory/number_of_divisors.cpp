vector<int> primes;  // list of primes from seive

int nod(int n) {
    int divisors = 1;
    for(int i = 0; i < primes.size(); i++) {
        if(n % primes[i] == 0) {
            int cnt = 1;
            while(n % primes[i] == 0) {
                cnt++;
                n /= primes[i];
            }
            divisors *= cnt;
        }
    }
    return divisors;
}