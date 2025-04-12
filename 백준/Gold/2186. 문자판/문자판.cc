#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int n, m, k;
string target;
vector<string> board;
int dx[4] = {0, 0, -1, 1}; // 좌 우 상 하
int dy[4] = {-1, 1, 0, 0};
int dp[100][100][80]; // 메모이제이션

int dfs(int x, int y, int depth) {
    if (depth == target.size() - 1) return 1; // 마지막 문자까지 왔다면 성공

    int& ret = dp[x][y][depth];
    if (ret != -1) return ret;

    ret = 0;
    for (int dir = 0; dir < 4; ++dir) {
        for (int step = 1; step <= k; ++step) {
            int nx = x + dx[dir] * step;
            int ny = y + dy[dir] * step;

            if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;

            if (board[nx][ny] == target[depth + 1]) {
                ret += dfs(nx, ny, depth + 1);
            }
        }
    }

    return ret;
}

int main() {
    cin >> n >> m >> k;
    board.resize(n);

    for (int i = 0; i < n; ++i) {
        cin >> board[i];
    }
    cin >> target;

    memset(dp, -1, sizeof(dp)); // 초기화

    int total = 0;
    for (int x = 0; x < n; ++x) {
        for (int y = 0; y < m; ++y) {
            if (board[x][y] == target[0]) {
                total += dfs(x, y, 0);
            }
        }
    }

    cout << total << endl;
    return 0;
}
