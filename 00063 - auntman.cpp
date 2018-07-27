#include <cstdio>
#include <queue>
using namespace std;

typedef pair<int, int> ii;

char board[1010][1010];
int n, m;

bool is_valid(int i, int j) {
    return i >= 0 && j >= 0 && i < n && j < m;
}

const int ps_coor_x[] = {1, -1, 0, 0};
const int ps_coor_y[] = {0, 0, 1, -1};

const int x_coor_x[] = {1, -1, 2, -2, 1, -1, 2, -2};
const int x_coor_y[] = {1, -1, 2, -2, -1, 1, -2, 2};

int enable_trap(queue<ii> q, const int* coor_x, const int* coor_y, int size_coor) {
    int cnt = 0;
    while(!q.empty()) {
        ii p = q.front(); q.pop();
        for(int d = 0; d < size_coor; d++) {
            int ni = coor_x[d] + p.first;
            int nj = coor_y[d] + p.second;

            if(is_valid(ni, nj) && board[ni][nj] == 'A') {
                board[ni][nj] = '.';
                cnt++;
            }
        }
    }
    return cnt;
}

void print_board() {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%c", board[i][j]);
        }
        puts("");
    }
}

int main() {
    scanf("%d %d", &n, &m);

    queue<ii> x, ps;
    char temp;
    int cnt = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf(" %c", &temp);
            if(temp == 'x' || temp == '+') {
                if(temp == 'x') x.push(ii(i, j));
                else ps.push(ii(i, j));
                board[i][j] = '.';
            } else {
                board[i][j] = temp;
                if(temp == 'A') cnt++;
            }
        }
    }
    
    cnt -= enable_trap(x, x_coor_x, x_coor_y, 8);
    cnt -= enable_trap(ps, ps_coor_x, ps_coor_y, 4);

    printf("%d\n", cnt);
    print_board();
}
