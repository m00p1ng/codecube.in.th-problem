#include <cstdio>
#define MOD 909091

long long c[10010] = {0};

void gen_catalan() {
    c[0] = c[1] = 1;

    for(int n = 2; n <= 10000; n++) {
        for(int i = 0; i < n; i++) {
            c[n] += (c[i]*c[n-i-1]) % MOD;
        }
        c[n] %= MOD;
    }
}

int main() {
    gen_catalan();
    int n;

    scanf("%d", &n);
    printf("%lld\n", c[n]);
}
