#include <cstdio>
#include <cstring>

bool is_period(char* s, int word_len, int period_len) {
    for(int i = 0; i < period_len; i++) {
        for(int j = i + period_len; j < word_len; j += period_len) {
            if(s[i] != s[j]) {
                return false;
            }
        }
    }
    return true;
}

int period_cnt(char* s) {
    int len = strlen(s);
    int period = len;

    for(int i = 1; i <= len/2; i++) {
        if(len % i != 0) continue;

        if(is_period(s, len, i)) {
            period = i;
            break;
        }
    }
    return len/period;
}

int factor_cnt(int n) {
    int cnt = 0;
    for(int i = 1; i*i <= n; i++) {
        if(n % i == 0) {
            cnt++;
            if(n / i != i) cnt++;
        }
    }
    return cnt;
}

int main() {
    char s[100010];
    for(int t = 0; t < 5; t++) {
        scanf("%s", s);
        int cnt = period_cnt(s);
        printf("%d\n", factor_cnt(cnt));
    }
}
