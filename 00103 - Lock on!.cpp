#include <cstdio>

int abs(int n) {
    return n > 0 ? n : -n;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n, p, in, out;
    scanf("%d %d", &n, &p);

    int max_in = -1, min_out = 1000010;
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &in, &out);
        if(in > out) {
            swap(&in, &out);
        }
        max_in = max_in < in ? in : max_in;
        min_out = min_out > out ? out : min_out;
    }
    
    if(max_in <= min_out) {
        if(max_in <= p && p <= min_out) {
            puts("0");
        } else {
            int max_in_p = abs(max_in - p);
            int min_out_p = abs(min_out - p);
            int mn = max_in_p < min_out_p ? max_in_p : min_out_p;
            printf("%d\n", mn);
        }
    } else {
        puts("-1");
    }
}
