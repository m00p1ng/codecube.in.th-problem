#include <cstdio>

int main() {
    int n;
    char s[100];

    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%s", s);

        bool arr[256] = { false };
        for(int j = 0; s[j]; j++) {
            arr[s[j]] = 1;
        }

        printf("Case #%d: ", i);
        if(arr['X']) puts("No - Runtime error");
        else if(arr['T']) puts("No - Time limit exceeded");
        else if(arr['-']) puts("No - Wrong answer");
        else puts("Yes");
    }
}
