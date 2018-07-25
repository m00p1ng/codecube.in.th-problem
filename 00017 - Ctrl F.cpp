#include <cstdio>

int main() {
    int n, m;
    char a[1010], b[1010];
    scanf("%d %d", &n, &m);
    scanf("%s", a);
    scanf("%s", b);

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == b[0]) {
            bool found = true;
            for(int j = 1; j < m; j++) {
                if(a[i+j] != b[j]) {
                    found = false;
                    break;
                }
            }
            cnt += found;
        }
    }
    printf("%d\n", cnt);
}
