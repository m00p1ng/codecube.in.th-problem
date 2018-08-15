#include <cstdio>

int min(int a, int b) {
    return a < b ? a : b;
}

int dist(int cur, int a, int b) {
    int da = a - cur;
    int db = b - cur;

    if(da <= 0 && db <= 0) return 0;
    if(da <= 0) return 2*db;
    if(db <= 0) return 2*da;
    return 2*min(da, db);
}

int main() {
    int m;
    int a, b, c;
    scanf("%d", &m);
    scanf("%d %d %d", &a, &b, &c);

    for(int i = 0; i < m; i++) {
        int d = i % 3;

        if(d == 0) {
            a += dist(a, b, c);
        } else if(d == 1) {
            b += dist(b, a, c);
        } else {
            c += dist(c, a, b);
        }
    }
    printf("%d\n%d\n%d\n", a, b, c);
}
