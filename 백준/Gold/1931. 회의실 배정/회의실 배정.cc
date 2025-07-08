// 1931번 회의실 배정
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<int, int>> useRoomTime(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> useRoomTime[i].first >> useRoomTime[i].second;
    }

    // 끝나는 시간 기준 정렬
    sort(useRoomTime.begin(), useRoomTime.end(), [](pair<int, int> a, pair<int, int> b) {
        if (a.second == b.second)
            return a.first < b.first; // 끝나는 시간이 같으면 시작 시간 기준
        return a.second < b.second;
    });

    int cnt = 1;                      // 첫 회의는 무조건 선택
    int lastEndTime = useRoomTime[0].second;

    for (int i = 1; i < n; ++i)
    {
        if (useRoomTime[i].first >= lastEndTime) // 끝난 이후에 시작하는 회의만 선택
        {
            cnt++;
            lastEndTime = useRoomTime[i].second;
        }
    }

    cout << cnt;
}
