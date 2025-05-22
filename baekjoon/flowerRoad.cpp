#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, answer = 1e9;
int board[11][11];
bool visited[11][11];

int dx[] = { 0, 1, -1, 0, 0 };
int dy[] = { 0, 0, 0, 1, -1 };

// 꽃 1개 심을 수 있는지 확인하고 비용 계산
int canPlace(int x, int y) {
    int cost = 0;
    for (int d = 0; d < 5; d++) {
        int nx = x + dx[d];
        int ny = y + dy[d];

        if (nx < 0 || ny < 0 || nx >= n || ny >= n || visited[nx][ny])
            return -1;

        cost += board[nx][ny];
    }
    return cost;
}

// 꽃 위치 방문 상태 설정
void setVisited(int x, int y, bool flag) {
    for (int d = 0; d < 5; d++) {
        int nx = x + dx[d];
        int ny = y + dy[d];
        visited[nx][ny] = flag;
    }
}

// 백트래킹 함수
void backtrack(int depth, int totalCost) {
    if (depth == 3) {
        answer = min(answer, totalCost);
        return;
    }

    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            int cost = canPlace(i, j);
            if (cost == -1) continue;

            setVisited(i, j, true);
            backtrack(depth + 1, totalCost + cost);
            setVisited(i, j, false);
        }
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> board[i][j];

    backtrack(0, 0);

    cout << answer << '\n';
    return 0;
}
