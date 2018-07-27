#include <cstdio>

int an[200];

void gen_pattern() {
    an[0] = 3;
    an[1] = 2;

    for(int i = 2; i <= 200; i++) {
        an[i] = (3*an[i-1] + 4*an[i-2]) % 997;
    }
}

int main() {
    gen_pattern();

    int n, temp;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &temp);
        printf("%d ", an[temp % 166]);
    }
}
