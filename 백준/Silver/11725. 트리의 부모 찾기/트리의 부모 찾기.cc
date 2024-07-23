#include <iostream>
#include <vector>
using namespace std;

int n;
vector<vector<int>> adj;
vector<int> res;

void dfs(int node) {
    for (int next : adj[node]) {
        if (res[next] == 0) {
            res[next] = node;
            dfs(next);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b;
    cin >> n;

    adj.resize(n + 1);
    res.resize(n + 1, 0);

    for (int i = 0; i < n - 1; ++i) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    res[1] = 1;
    dfs(1);

    for (int i = 2; i <= n; ++i) {
        cout << res[i] << "\n";
    }

    return 0;
}
