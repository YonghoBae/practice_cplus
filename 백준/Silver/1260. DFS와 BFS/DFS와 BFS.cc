#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
int N, M;
vector<vector<int>> E;

void dfs(int v)
{
    stack<int> s;
    vector<bool> visited(N, false);
    s.push(v);
    while (!s.empty())
    {
        v = s.top();
        s.pop();
        if (!visited[v])
        {
            cout << v + 1 << " ";
            visited[v] = true;
        }
        for (auto i = E[v].rbegin(); i != E[v].rend(); ++i)
        {
            if (!visited[*i])
            {
                s.push(*i);
            }
        }
    }
}

void bfs(int v)
{
    int size;
    queue<int> q;
    vector<bool> visited(N, false);
    q.push(v);
    visited[v] = true;
    while (!q.empty())
    {
        v = q.front();
        q.pop();
        cout << v + 1 << " ";
        size = E[v].size();
        for (int i = 0; i < size; ++i)
        {
            if (!visited[E[v][i]])
            {
                q.push(E[v][i]);
                visited[E[v][i]] = true;
            }
        }
    }
}

int main()
{
    int V, index = 0, temp = 0;
    cin >> N >> M >> V;
    E.resize(N);
    for (int i = 0; i < M; ++i)
    {
        cin >> index >> temp;
        E[index - 1].push_back(temp - 1);
        E[temp - 1].push_back(index - 1);
    }
    for(int i=0;i<N;++i){
        sort(E[i].begin(), E[i].end());
    }
    dfs(V - 1);
    cout << endl;
    bfs(V - 1);
}