const int N = 10000005;
bitset<N + 5> prime;

void sieve() {
    int i, j, limit = sqrt(N * 1.) + 2;
    for(i = 4; i <= N; i += 2) prime[i] = true;

    for(i = 3; i <= limit; i += 2) {
        if(!prime[i]) {
            for (j = i * i; j <= N; j += i * 2) {
                prime[j] = true;
            }
        }
    }
}

// N(log(log sqrt(N)))