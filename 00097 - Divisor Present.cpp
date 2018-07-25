#include <cstdio>
#include <stack>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    stack<int> st;
    
    if(n > 1) st.push(n);

    printf("1");
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) {
            printf(" %d", i);
            if(n/i != i) st.push(n/i);
        }
    }
   
    while(!st.empty()) {
        printf(" %d", st.top());
        st.pop();
    }

    puts("");
}
