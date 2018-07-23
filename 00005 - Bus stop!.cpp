#include <cstdio>

long long gcd(long long a, long long b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return a*b/gcd(a, b);
}

int main() {
    int n;
    long long num, cur_lcm;

    scanf("%d", &n);
    scanf("%lld", &cur_lcm);

    for(int i = 1; i < n; i++) {
        scanf("%lld", &num);
        cur_lcm = lcm(cur_lcm, num);
    }
    
    printf("%lld\n", cur_lcm);
}
