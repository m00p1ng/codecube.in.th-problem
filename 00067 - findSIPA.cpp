#include <cstdio>
#include <cstring>
#include <cctype>

char s[1010];

bool is_found(int idx) {
    if(tolower(s[idx]) == 's' &&
        tolower(s[idx+1]) == 'i' &&
        tolower(s[idx+2]) == 'p' &&
        tolower(s[idx+3]) == 'a') {
        return true;
    }
    return false;
}

int main() {
    scanf("%s", s);

    int cnt = 0;
    int len = strlen(s);
    for(int i = 0; s[i]; i++) {
        if(len - i > 0 && is_found(i)) {
            cnt++;
            printf("\"");
            for(int j = 0; j < 4; j++) {
                printf("%c", s[i+j]);
            }
            printf("\"");
            i += 3;
        } else {
            printf("%c", s[i]);
        }
    }
    puts("");
    printf("%d\n", cnt);
}
