#include <cstdio>

int main() {
    int n;
    int scores[5];
    int sum = 0;

    scanf("%d", &n);
    for(int i = 0; i < 5; i++) {
        scanf("%d", &scores[i]);
        sum += scores[i];
    }

    bool is_valid = sum == n;
    
    for(int i = 0; i < 5 && !is_valid; i++) {
        if(sum - scores[i] == n) {
            is_valid = true;
            scores[i] = 0;
        }
    }

    if(is_valid) {
        for(int i = 0; i < 5; i++) {
            printf("%d ", scores[i]);
        }
    } else {
        puts("-1");
    }
}
