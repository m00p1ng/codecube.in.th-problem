#include <cstdio>

int min_a1, min_a2, min_b1, min_b2;

int min(int a, int b) {
    return a < b ? a : b;
}

void find_min(int size, int* a, int* b) {
    int temp;
    for(int i = 0; i < size; i++) {
        scanf("%d", &temp);
        if(temp <= *a) {
            *b = *a;
            *a = temp;
        } else if(temp <= *b) {
            *b = temp;
        }
    }
}

int main() {
    int a, b, temp;
    min_a1 = min_a2 = min_b1 = min_b2 = 10000;

    scanf("%d %d", &a, &b);

    find_min(a, &min_a1, &min_a2);
    find_min(b, &min_b1, &min_b2);
    
    int aa = min_a1 + min_a2;
    int bb = min_b1 + min_b2;
    int ab = min_a1 + min_b1 + 100;

    printf("%d\n", min(aa, min(bb, ab)));
}
