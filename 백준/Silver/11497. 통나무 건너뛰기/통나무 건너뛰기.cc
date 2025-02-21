#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<int> l(n);

        for (int i = 0; i < n; ++i) {
            cin >> l[i];
        }

        sort(l.begin(), l.end()); // 정렬

        vector<int> arranged(n); // 최적 배치 저장
        int left = 0, right = n - 1;

        // 정렬된 리스트에서 한 번씩 좌우로 배치
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                arranged[left++] = l[i];
            } else {
                arranged[right--] = l[i];
            }
        }

        // 최댓값 계산
        int max_diff = 0;
        for (int i = 1; i < n; i++) {
            max_diff = max(max_diff, abs(arranged[i] - arranged[i - 1]));
        }

        // 원형이므로 첫 번째와 마지막 원소 차이도 고려해야 함
        max_diff = max(max_diff, abs(arranged[0] - arranged[n - 1]));

        cout << max_diff << '\n';
    }

    return 0;
}
