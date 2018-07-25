#include <cstdio>

int main() {
    char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int n, m;
    scanf("%d %d", &n, &m);

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%c", alpha[cnt % 26]);
            cnt++;
        }
        puts("");
    }
}
