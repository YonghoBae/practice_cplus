#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t, n;
    cin >> t;

    for (int k = 0; k < t; ++k) {
        cin >> n;
        vector<int> l(n);

        for (int i = 0; i < n; ++i) {
            cin >> l[i];
        }

        sort(l.begin(), l.end()); // 오름차순 정렬

        vector<int> arranged(n); // 최적 배치 배열
        int left = 0, right = n - 1;

        // 홀수/짝수를 따로 관리하는 것이 아니라, 정렬된 배열을 양 끝에서 배치
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                arranged[left++] = l[i];  // 작은 값부터 왼쪽 배치
            } else {
                arranged[right--] = l[i]; // 작은 값부터 오른쪽 배치
            }
        }

        // 인접한 값들 간 최대 차이 계산 (원형 고려)
        int max_diff = 0;
        for (int i = 1; i < n; ++i) {
            max_diff = max(max_diff, abs(arranged[i] - arranged[i - 1]));
        }

        // 원형이므로 첫 번째와 마지막 차이도 고려
        max_diff = max(max_diff, abs(arranged[0] - arranged[n - 1]));

        cout << max_diff << '\n';
    }

    return 0;
}
