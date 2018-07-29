#include <cstdio>
#include <cctype>
#include <cstring>
#define MAX 1000010

int compare_diff(char a, char b) {
    int la = tolower(a);
    int lb = tolower(b);
    int diff = la - lb;

    if(0 <= diff && diff < 10) return diff;
    if(26 + diff < 10) return 26 + diff;
    return -1;
}

int main() {
    char a[MAX], b[MAX];

    scanf("%s", a);
    scanf("%s", b);

    int len = strlen(a);

    bool is_valid = true;
    char out[MAX];
    out[len] = '\0';
    for(int i = 0; i < len && is_valid; i++) {
        int dist = compare_diff(a[i], b[i]);
        if(dist != -1) {
            out[i] = '0' + dist;
        } else {
            is_valid = false;
        }
    }

    if(is_valid) {
        puts(out);
    } else {
        puts("R.I.P.");
    }
}
