//11060번 점프 점프
//실패 재구현 필요
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i=0;i<n;++i){
        cin >> a[i];
    }

    int cnt=0, c=0;
    while(c<n-1){  // 마지막 위치 도달할 때까지
        if(a[c] == 0){  // 현재 위치에서 움직일 수 없는 경우
            cout << -1;
            return 0;
        }
        
        int next = c;  // 다음에 이동할 위치
        
        // 현재 위치에서 점프 가능한 모든 경우 확인
        for(int j=1; j<=a[c] && c+j<n; ++j){
            // 다음 위치로 이동할 수 있고, 그 위치가 더 앞서있다면 선택
            next = max(next, c+j);  // 가장 멀리 갈 수 있는 위치 선택
        }
        
        if(c == next){  // 더 이상 진행할 수 없는 경우
            cout << -1;
            return 0;
        }
        
        c = next;
        cnt++;
    }

    cout << cnt;
    return 0;
}

// 1xN 미로
// Ai=3이면 최대 3칸까지 이동 가능
// 최소 몇번 점프로 도착 가능한지
// 불가능한 경우 -1

// 불가능한 경우는 0으로 차있어서 못 갈때
// 현재 칸 기준에서 가장 멀리 갈수있는것


