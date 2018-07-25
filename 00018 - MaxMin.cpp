#include <cstdio>

int main() {
    int n;
    int a = 0, b = 100000000, temp;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &temp);
        a = a > temp ? a : temp;
        b = b < temp ? b : temp;
    }
    printf("%d\n%d", a, b);
}
