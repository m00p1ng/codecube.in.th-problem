#include <cstdio>

bool is_prime[500010] = { false };
int cnt_prime[500010l] = {0};

void gen_prime() {
    is_prime[0] = is_prime[1] = true;

    for(int i = 2; i <= 500000; i++) {
        cnt_prime[i] = cnt_prime[i-1];
        if(!is_prime[i]) {
            for(int j = i+i; j <= 500000; j += i) {
                is_prime[j] = true;
            }
            cnt_prime[i]++;
        }
    }
}

int main() {
    gen_prime();
    int n, b;
    scanf("%d %d", &n, &b);
    
    int add_bomb = cnt_prime[n] - b;
    if(add_bomb < 0) add_bomb = 0;

    printf("%d\n", add_bomb);
}
