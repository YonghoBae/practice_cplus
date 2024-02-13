#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int M, N;
vector<vector<int>> box;
vector<vector<bool>> visited;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int bfs()
{
    queue<pair<int, int>> q;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            if (box[i][j] == 1)
            {
                q.push({i, j});
            }
        }
    }

    int days = 0;
    while (!q.empty())
    {
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i)
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            for (int dir = 0; dir < 4; ++dir)
            {
                int nx = x + dx[dir];
                int ny = y + dy[dir];
                if (nx >= 0 && nx < N && ny >= 0 && ny < M && box[nx][ny] == 0 && box[nx][ny] != -1)
                {
                    box[nx][ny] = 1;
                    q.push({nx, ny});
                }
            }
        }
        if (!q.empty())
            days++;
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            if (box[i][j] == 0)
                return -1;
        }
    }
    return days;
}

int main()
{
    cin >> M >> N;
    box.resize(N, vector<int>(M));

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> box[i][j];
        }
    }

    cout << bfs() << endl;

    return 0;
}
