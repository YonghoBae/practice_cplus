//동적 프로그래밍 문제
#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

int dp[1001][1001];  // dp 테이블

int main() {
    int T;  // 테스트 케이스 수
    cin >> T;

    while (T--) {
        int N;  // 카드의 개수
        cin >> N;
        vector<int> cards(N);
        
        for (int i = 0; i < N; ++i) {
            cin >> cards[i];  // 각 카드의 점수 입력
        }

        // DP 테이블 초기화
        memset(dp, 0, sizeof(dp));

        // DP 계산
        // dp[l][r]는 카드 배열 [l, r]에서 근우가 얻을 수 있는 최대 점수
        for (int length = 1; length <= N; ++length) {
            for (int l = 0; l + length - 1 < N; ++l) {
                int r = l + length - 1;  // 오른쪽 끝 인덱스
                if (length == 1) {
                    dp[l][r] = cards[l];  // 카드가 하나일 때, 근우는 그 카드를 가져감
                } else {
                    // 근우의 차례에 양 끝에서 최선을 선택 (명우의 차례에서는 근우가 얻는 점수가 작아지게 명우도 최선의 선택)
                    dp[l][r] = max(cards[l] - dp[l+1][r], cards[r] - dp[l][r-1]);
                }
            }
        }

        // dp[0][N-1]은 전체 카드에서 근우가 얻을 수 있는 최대 점수
        int totalScore = 0;
        for (int i = 0; i < N; ++i) {
            totalScore += cards[i];  // 모든 카드의 총합 계산
        }
        
        // 근우가 얻는 점수는 전체 점수에서 명우가 방해한 점수를 뺀 값
        cout << (totalScore + dp[0][N-1]) / 2 << "\n";
    }

    return 0;
}
