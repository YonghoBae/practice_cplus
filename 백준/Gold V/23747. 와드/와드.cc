#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

vector<vector<char>> g, ES;
vector<vector<bool>> visited;
int R, C;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int bfs(int sr, int sc)
{
    queue<pair<int, int>> q;

    int x, y, nx, ny;
    q.push({sr, sc});
    while (!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        ES[x][y] = '.';
        visited[x][y] = true;
        for (int i = 0; i < 4; ++i)
        {
            nx = x + dx[i];
            ny = y + dy[i];
            if (nx >= 0 && ny >= 0 && nx < R && ny < C && g[nx][ny] == g[x][y] && !visited[nx][ny])
            {
                ES[nx][ny] = '.';
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }

    return 0;
}

int main()
{
    int SR, SC;
    string way;
    cin >> R >> C;
    ES.resize(R, vector<char>(C, '#'));
    g.resize(R, vector<char>(C));
    visited.resize(R, vector<bool>(C, false));
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> g[i][j];
        }
    }
    cin >> SR >> SC;
    cin >> way;
    --SR;
    --SC;

    int wsize = way.size();
    for (int i = 0; i < wsize; ++i)
    {
        if (way[i] == 'W' && visited[SR][SC] == false)
        {
            bfs(SR, SC);
        }
        else if (way[i] == 'U')
        {
            SR--;
        }
        else if (way[i] == 'D')
        {
            SR++;
        }
        else if (way[i] == 'L')
        {
            SC--;
        }
        else if (way[i] == 'R')
        {
            SC++;
        }
    }
    ES[SR][SC] = '.';
    for (int i = 0; i < 4; i++)
    {
        if (SR + dx[i] >= 0 && SC + dy[i] >= 0 && SR + dx[i] < R && SC + dy[i] < C)
        {
            ES[SR + dx[i]][SC + dy[i]] = '.';
        }
    }
    for (int i = 0; i < R; ++i)
    {
        for (int j = 0; j < C; ++j)
        {
            cout << ES[i][j];
        }
        cout << endl;
    }
    return 0;
}