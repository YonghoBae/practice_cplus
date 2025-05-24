#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int val = 1e9;

void backtrack(int n, int idx, int cnt, vector<bool>& t, vector<vector<int>>& s) {
    if (cnt == n / 2) {
        int start_score = 0, link_score = 0;
        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (t[i] && t[j]) {
                    start_score += s[i][j] + s[j][i];
                } else if (!t[i] && !t[j]) {
                    link_score += s[i][j] + s[j][i];
                }
            }
        }
        val = min(val, abs(start_score - link_score));
        return;
    }

    for (int i = idx; i < n; ++i) {
        if (!t[i]) {
            t[i] = true;
            backtrack(n, i + 1, cnt + 1, t, s);
            t[i] = false;
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> s(n, vector<int>(n));
    vector<bool> t(n, false);

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> s[i][j];

    backtrack(n, 0, 0, t, s);

    cout << val << "\n";
    return 0;
}
