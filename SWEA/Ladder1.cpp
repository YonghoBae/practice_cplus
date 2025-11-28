#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

const int SIZE = 100;

int main(int argc, char** argv)
{
    // 빠른 입출력 (권장)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    const int T = 10; 

    for(int test_case = 1; test_case <= T; ++test_case)
    {
        // 1. 테스트 케이스 번호 입력 (입력 스트림에서 번호를 읽어 버립니다)
        int tcNum;
        if (!(cin >> tcNum)) break;
        
        // 2. 100x100 사다리 입력
        vector<vector<int>> board(SIZE, vector<int>(SIZE));
        int start_x = -1; // 도착 지점(2)의 x 좌표 (Column)

        for(int y = 0; y < SIZE; ++y){ // 행 (Row)
            for(int x = 0; x < SIZE; ++x){ // 열 (Column)
                cin >> board[y][x];
                // 3. 도착 지점 '2'의 x 좌표 찾기 (가장 아래 행, y=99)
                if (y == SIZE - 1 && board[y][x] == 2) {
                    start_x = x;
                }
            }
        }
        
        // 4. 역방향 탐색 (도착 지점부터 y=0까지 위로 올라갑니다)
        int current_x = start_x;
        int current_y = SIZE - 1; // y=99에서 시작

        // y가 0이 될 때까지 반복
        while (current_y > 0) {
            
            // 5. 좌우 확인 및 이동 (가로선 우선)
            
            // 5-1. ⬅️ 좌측 확인: 왼쪽 칸에 사다리(1)가 있다면
            if (current_x - 1 >= 0 && board[current_y][current_x - 1] == 1) {
                // 사다리가 끝날 때까지 왼쪽으로 쭉 이동
                while (current_x - 1 >= 0 && board[current_y][current_x - 1] == 1) {
                    current_x--;
                }
            } 
            // 5-2. ➡️ 우측 확인: 오른쪽 칸에 사다리(1)가 있다면
            else if (current_x + 1 < SIZE && board[current_y][current_x + 1] == 1) {
                 // 사다리가 끝날 때까지 오른쪽으로 쭉 이동
                 while (current_x + 1 < SIZE && board[current_y][current_x + 1] == 1) {
                    current_x++;
                }
            }
            // 6. ⬆️ 좌우 이동이 끝났거나 가로선이 없으면, 무조건 위로 한 칸 이동
            current_y--;
        }

        // 7. 결과 출력: y=0일 때의 x 좌표가 정답
        cout << "#" << tcNum << " " << current_x << "\n";
    }
    return 0;
}