//14503번 로봇청소기 포기 다음 기회로
#include <iostream>
#include <vector>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int r, c, d;
    cin >> r >> c >> d;

    vector<vector<int>> room(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> room[i][j];
        }

        int cnt=0;
        int x[4] = {0,1,0,-1};
        int y[4] = {1,0,-1,0};
        while(1){
            // 1. 현재 칸 == 0인 경우, 현재 칸을 청소
            if(room[r][c] == 0){
                cnt++;
            }
            
            for(int i=0;i<4;++i){
                for(int j=0;j<4;++j){
                    if(room[r+x[i]][c+y[j]] == 0){
                        for(int k=4;k>0;--k){
                            
                        }
                    }
                }
            }

            // 2. 현재 칸의 주변 4칸 중 0이 없는 경우,
            // 1. 바라보는 방향 유지 한 칸 후진 후 1번으로
            // 2. 바라보는 방향의 뒤쪽 칸이 1이라면 작동을 멈춘다.
            // 3. 현재 칸의 주변 4칸 중 0이 있는 경우,
            // 1. 반시계 방향으로 90도 회전한다.== 4부터 1 순서대로 회전
            // 2. 앞쪽 칸이 0인 경우 한 칸 전진한다.
            // 3. 1번으로 돌아간다.
        }
    }

    

}

// n*m 각 칸은 벽 or 빈칸
