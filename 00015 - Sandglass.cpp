#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    if(n & 1) {
        int line = (n - 1)/2;
        for(int i = line; i >= 0; i--) {
            for(int j = 0; j < line - i; j++) printf(" ");
            for(int j = 0; j < 2*i + 1; j++)  printf("*"); 
            puts("");
        }
        for(int i = 1; i <= line; i++) {
            for(int j = 0; j < line - i; j++) printf(" ");
            for(int j = 0; j < 2*i + 1; j++)  printf("*"); 
            puts("");
        }
    } else {
        puts("error");
    }
}
