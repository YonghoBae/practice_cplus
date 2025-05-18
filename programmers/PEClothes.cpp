//programmers: 체육복
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    // 1. 중복(자기 자신이 lost & reserve) 먼저 제거
    //    => 본인은 여벌을 빌려줄 수 없고, 자기 자신에게만 씀
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    
    for (int i=0; i<reserve.size();) {
        // reserve[i]가 lost 안에 있는지 확인
        auto it = find(lost.begin(), lost.end(), reserve[i]);
        if (it != lost.end()) {
            // 둘 다에서 제거
            lost.erase(it);
            reserve.erase(reserve.begin() + i);
            // i는 증가시키지 않고 계속 같은 위치에서 검사
        } else {
            i++;
        }
    }
    
    // 2. 이제 빌려줄 수 있는 reserve만 남았으므로
    //    위에 있던 빌려주는 로직 그대로 적용
    int answer = 0;
    
    // 여벌 빌려주기
    for(int i=0; i<reserve.size(); i++){
        // 왼쪽 먼저 확인
        if (reserve[i] > 1) {
            auto left = find(lost.begin(), lost.end(), reserve[i] - 1);
            if (left != lost.end()) {
                lost.erase(left);
                continue; // 다음 reserve로 넘어감
            }
        }
        // 오른쪽 확인
        if (reserve[i] < n) {
            auto right = find(lost.begin(), lost.end(), reserve[i] + 1);
            if (right != lost.end()) {
                lost.erase(right);
            }
        }
    }
    
    answer = n - lost.size();
    return answer;
}

//전체 학생 수 n
//체육복 도난당한 번호 lost
//여벌의 체육복 학생들의 reserve 바로 앞,뒤 학생에게만 빌려주기 가능
//lost이면서 reserve일수도 있음


// 이런 방법은 생각도 못했네
// 훨씬 간단하다
// 난 너무 있는 그대로 서술적인 의미 그대로 만들려는 경향이 있는듯
// #include <string>
// #include <vector>

// using namespace std;
// int student[35];
// int solution(int n, vector<int> lost, vector<int> reserve) {
//     int answer = 0;
//     for(int i : reserve) student[i] += 1;
//     for(int i : lost) student[i] += -1;
//     for(int i = 1; i <= n; i++) {
//         if(student[i] == -1) {
//             if(student[i-1] == 1) 
//                 student[i-1] = student[i] = 0;
//             else if(student[i+1] == 1) 
//                 student[i] = student[i+1] = 0;
//         }
//     }
//     for(int i  = 1; i <=n; i++)
//         if(student[i] != -1) answer++;

//     return answer;
// }
