#include <cstdio>
#define MAX 1000010

int kmp_table[MAX];

void KMPprocess(char* s, int size) {
    int i = 0, j = -1;
    kmp_table[0] = -1;

    while(i < size) {
        while(j >= 0 && s[i] != s[j]) {
            j = kmp_table[j];
        }
        i++;
        j++;
        kmp_table[i] = j;
    }
}

int KMPSearch(char* s, int size_s, char* p, int size_p) {
    int i = 0, j = 0;
    int cnt = 0;

    while(i < size_s) {
        while(j >= 0 && s[i] != p[j]) {
            j = kmp_table[j];
        }
        i++;
        j++;
        if(j == size_p) {
            cnt++;
            j = kmp_table[j];
        }
    }
    return cnt;
}

int main () {
    int n, m;
    char a[MAX], b[MAX];

    scanf("%d %d", &n, &m);
    scanf("%s", a);
    scanf("%s", b);

    KMPprocess(a, n);
    int cnt = KMPSearch(a, n, b, m);
    printf("%d\n", cnt);
}
