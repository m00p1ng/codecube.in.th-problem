#include <cstdio>
#include <algorithm>
#define MAX 1000010
using namespace std;

int main() {
    int n;
    int in_arr[MAX];
    int out_arr[MAX];

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d %d", &in_arr[i], &out_arr[i]);
    }

    sort(in_arr, in_arr+n);
    sort(out_arr, out_arr+n);

    int g = 1, m = 1;
    int i = 1, j = 0;

    while(i < n && j < n) {
        if(in_arr[i] < out_arr[j]) {
            g++;
            if(m < g) m = g;
            i++;
        } else {
            g--;
            j++;
        }
    }
    printf("%d\n", m);
}
