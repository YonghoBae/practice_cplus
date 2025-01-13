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
    bool v[25][25] = { true };
    int n, num, cnt;
    stack<pair<int, int>> s;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> u[i][j];
            v[i][j] = false;
        }
    }

    pair<int, int> a;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (u[i][j] == 1 && v[i][j] == false)
            {
                s.push({i, j});
            }
            while (!s.empty())
            {
                if (!v[i][j])
                {
                    v[i][j] = true;
                    a = s.top();
                    s.pop();

                    for (int k = 0; k < 4; ++k)
                    {
                        if (u[a.first+x[k]][a.second+y[k]] == 1 && v[a.first+x[k]][a.second+y[k]] == false)
                        {
                            s.push({a.first+x[k], a.second+y[k]});
                        }
                    }
                }
            }
        }
    }
}