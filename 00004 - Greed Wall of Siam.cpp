#include <cstdio>

long long gcd(long long a, long long b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    long long n, sum = 0, num, cur_gcd;
    scanf("%lld", &n);

    scanf("%lld", &num);
    sum = cur_gcd = num;
    
    for(int i = 1; i < n; i++) {
        scanf("%lld", &num);
        sum += num;
        cur_gcd = gcd(cur_gcd, num);
    }

    printf("%lld\n", sum / cur_gcd);
}
