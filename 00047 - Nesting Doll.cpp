#include <cstdio>
#include <algorithm>
#include <queue>
#define MAX 100000
using namespace std;

int dolls[MAX];
int box[MAX];
int n;

int get_doll() {
    queue<int> q;
    q.push(dolls[0]);

    for(int i = 1; i < n; i++) {
        if(q.front() > dolls[i]) {
            q.pop();
        }
        q.push(dolls[i]);
    }

    return q.size();
}

bool cmp(int a, int b) {
    return a > b;
}

int main() {

    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &dolls[i]);
    }

    sort(dolls, dolls+n, cmp);
    printf("%d\n", get_doll());
}
