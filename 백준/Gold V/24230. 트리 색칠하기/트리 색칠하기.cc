#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> adj;
vector<int> color;
vector<bool> visited;
int paintCount = 0;

void dfs(int node, int parentColor) {
    visited[node] = true;
    if (color[node] != parentColor) {
        paintCount++;
    }
    
    for (int child : adj[node]) {
        if (!visited[child]) {
            dfs(child, color[node]);
        }
    }
}

int main() {
    int N;
    cin >> N;

    adj.resize(N + 1);
    color.resize(N + 1);
    visited.resize(N + 1, false);

    for (int i = 1; i <= N; i++) {
        cin >> color[i];
    }

    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1, 0);
    cout << paintCount << endl;

    return 0;
}
