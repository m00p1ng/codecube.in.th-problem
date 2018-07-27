#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vii;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    vii programmer = vii(n, vi(m, 0));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &programmer[i][j]);
        }
        sort(programmer[i].begin(), programmer[i].begin()+m);
    }
    
    int cnt[1000010] = {0};
    int mx = 0;

    for(int j = 0; j < m; j++) {
        int temp_max = 0;
        int addr = 0;
        for(int i = 0; i < n; i++) {
            if(programmer[i][j] > temp_max) {
                temp_max = programmer[i][j];
                addr = i;
            }
        }
        cnt[addr]++;
        if(cnt[addr] > mx) {
            mx = cnt[addr];
        }
    }

    for(int i = 0; i < n; i++) {
        if(cnt[i] == mx) {
            printf("%d\n", i+1);
            break;
        }
    }
}
