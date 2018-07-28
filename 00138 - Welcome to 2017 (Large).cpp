#include <cstdio>

int main() {
    int n, temp, arr[4010] = {0};
    int mn = 4010, mx = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &temp);
        arr[temp]++;
        mn = mn > temp ? temp : mn;
        mx = mx < temp ? temp : mx;
    }

    int ans = -1;
    int interval = 4034 > mn + mx ? (2017 - mn) : (mx - 2017);

    for(int i = 0; i <= interval; i++) {
        if(i <= 2017 && arr[2017-i] == 1) {
            ans = 2017 - i;
            break;
        } else if(i <= 1983 && arr[2017+i] == 1) {
            ans = 2017 + i;
            break;
        }
    }
    printf("%d\n", ans);
}
