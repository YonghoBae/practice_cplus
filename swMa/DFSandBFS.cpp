#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    int u[25][25] = {0};
    int x[4] = {0, 0, 1, -1};
    int y[4] = {1, -1, 0, 0};
    bool v[25][25] = {false}; // 방문 여부
    int n;
    cin >> n; // n 값 입력

    // 행렬 입력
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> u[i][j];
            v[i][j] = false;
        }
    }

    stack<pair<int, int>> s;
    pair<int, int> a;

    // 탐색
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (u[i][j] == 1 && !v[i][j]) // 시작 노드
            {
                s.push({i, j});
            }

            while (!s.empty())
            {
                a = s.top();
                s.pop();

                if (u[a.first][a.second] == 1 && !v[a.first][a.second])
                {
                    v[a.first][a.second] = true;

                    // 4방향 탐색
                    for (int k = 0; k < 4; ++k)
                    {
                        int nx = a.first + x[k];
                        int ny = a.second + y[k];

                        // 경계 확인 및 조건 확인
                        if (nx >= 0 && nx < n && ny >= 0 && ny < n &&
                            u[nx][ny] == 1 && !v[nx][ny])
                        {
                            s.push({nx, ny});
                        }
                    }
                }
            }
        }
    }

    return 0;
}
