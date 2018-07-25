#include <cstdio>

int main() {
    int n;
    char s[100010];
    scanf("%d", &n);
    scanf("%s", s);

    bool is_found = false;
    for(int i = 0; i < n - 1; i++) {
        if(s[i] == s[i+1]) {
            is_found = true;
            break;
        }
    }

    if(is_found) puts("Wrong Answer");
    else puts("Accepted");
}
