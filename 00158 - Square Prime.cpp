#include <cstdio>

bool is_prime[1100] = {false};
bool sq_prime[1000010] = {false};

void gen_prime() {
    is_prime[0] = is_prime[1] = true;

    for(int i = 2; i <= 1000; i++) {
        if(!is_prime[i]) {
            sq_prime[i*i] = true;
            for(int j = i+i; j <= 1000; j += i) {
                is_prime[j] = true;
            }
        }
    }
}

int main() {
    gen_prime();

    int a, b;
    int found = false;
    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++) {
        if(sq_prime[i]) {
            printf("%d ", i);
            found = true;
        }
    }

    if(!found) {
        puts("-1");
    }
    puts("");
}

