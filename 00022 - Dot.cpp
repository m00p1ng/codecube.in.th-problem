#include <cstdio>
using namespace std;

int main() {
    int n, cnt = 0, x, y;
    bool visited[1<<20] = { false };

    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        if(visited[(x<<10) + y] == false) cnt++;
        visited[(x<<10) + y] = true;
    }
    printf("%d\n", cnt);
}
