//1744번 수묶기
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    
    vector<int> positive, negative;
    int ones = 0, zeros = 0;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x > 1) positive.push_back(x);
        else if (x == 1) ones++;
        else if (x == 0) zeros++;
        else negative.push_back(x);
    }

    // 큰 수부터 정렬 (양수는 큰 값끼리 묶어야 이득)
    sort(positive.rbegin(), positive.rend());

    // 작은 수부터 정렬 (음수는 작은 값끼리 묶어야 절댓값 커짐)
    sort(negative.begin(), negative.end());

    // 양수 그룹 묶기
    for (int i = 0; i + 1 < positive.size(); i += 2) {
        sum += positive[i] * positive[i + 1];
    }
    // 양수 중 홀수 개라 남은 게 있다면 그냥 더하기
    if (positive.size() % 2 == 1) sum += positive.back();

    // 음수 그룹 묶기
    for (int i = 0; i + 1 < negative.size(); i += 2) {
        sum += negative[i] * negative[i + 1];
    }
    // 음수 중 홀수 개라 남은 게 있고, 0이 없으면 그냥 더하기
    if (negative.size() % 2 == 1 && zeros == 0) {
        sum += negative.back();
    }

    // 1은 무조건 더하기
    sum += ones;

    cout << sum;
}
