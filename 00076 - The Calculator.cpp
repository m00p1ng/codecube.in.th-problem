#include <cstdio>

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    long long la = a*1e10;
    long long lb = b*1e10;
    long long lc = c*1e10;
    
    if(la + lb == lc) puts("Correct");
    else puts("Wrong");
}
