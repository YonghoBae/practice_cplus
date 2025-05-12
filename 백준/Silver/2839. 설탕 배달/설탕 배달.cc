#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    const int INF = 5001;
    int dp[5001];

    fill(dp, dp + n + 1, INF);
    dp[0] = 0;

    for (int i = 3; i <= n; ++i) {
        if (i >= 3 && dp[i - 3] != INF)
            dp[i] = min(dp[i], dp[i - 3] + 1);
        if (i >= 5 && dp[i - 5] != INF)
            dp[i] = min(dp[i], dp[i - 5] + 1);
    }

    if (dp[n] == INF)
        cout << -1;
    else
        cout << dp[n];

    return 0;
}
