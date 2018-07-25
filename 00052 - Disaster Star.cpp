#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    
    int line = (n-1)>>1;
    for(int i = 0; i <= line; i++) {
        for(int j = 0; j < line - i; j++) printf("-");
        for(int j = 0; j < 2*i + 1; j++) printf("*");
        for(int j = 0; j < line - i; j++) printf("-"); 
        puts("");
    }
    for(int i = line - 1; i >= 0; i--) {
        for(int j = 0; j < line - i; j++) printf("-");
        for(int j = 0; j < 2*i + 1; j++) printf("*");
        for(int j = 0; j < line - i; j++) printf("-"); 
        puts("");
    }
}
