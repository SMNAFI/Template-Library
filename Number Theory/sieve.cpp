const int N = 10000005;
bitset<N> prime;

void sieve() {
    for(int i = 4; i <= N; i += 2) prime[i] = true;

    for(int i = 3; i * i <= N; i += 2) {
        if(!prime[i]) {
            for (int j = i * i; j <= N; j += i * 2) {
                prime[j] = true;
            }
        }
    }
}

// N(log(log sqrt(N)))