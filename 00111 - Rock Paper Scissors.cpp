#include <cstdio>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int r, p, s;
    scanf("%d %d %d", &r, &p, &s);
    
    if(r + s + p != 100) {
        puts("BUG");
    } else {
        int m = max(r, max(p, s));
        int k = 0;
        if(r == m) k++;
        if(p == m) k++;
        if(s == m) k++;

        if(k != 1) puts("I DON\'T KNOW");
        else {
            if(r == m) puts("PAPER");
            else if(s == m) puts("ROCK");
            else puts("SCISSORS");
        }
    }
}
