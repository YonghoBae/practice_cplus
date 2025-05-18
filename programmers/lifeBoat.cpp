//programmers: 구명보트
//programmers: 구명보트

#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    sort(people.begin(), people.end());  // 몸무게 정렬

    int left = 0;           // 가장 가벼운 사람 (앞쪽)
    int right = people.size() - 1; // 가장 무거운 사람 (뒤쪽)
    int boats = 0;          // 사용한 보트 개수

    while (left <= right) {
        if (people[left] + people[right] <= limit) {
            // 가장 가벼운 사람과 가장 무거운 사람이 같이 탈 수 있음
            left++;
        }
        // 무거운 사람은 무조건 보트에 태워야 하므로 right 감소
        right--;
        boats++;
    }

    return boats;
}


//구명보트 최대 2명 탑승 + 무게제한
//구명보트 최소 사용
//people = 사람몸무게, limit = 무게제한
//몸무게가 많은 사람 + 남은 무게 중에 가장 높은 무게부터
//라고 생각했는데 투포인터를 이용하는게 코드도 쉽고 답도 나오네
//처음에 생각은 했는데 답이 나오나싶어서 안한 경우우



// 시간초과 코드
// O(n^2)인데 n=50000이니까 시간초과나는게 당연
// #include <string>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int solution(vector<int> people, int limit) {
//     int answer = 0;
//     int size = people.size();
//     int rest;
//     vector<bool> v(size, false);
    
//     sort(people.rbegin(),people.rend());
    
//     int i=0, min=0, mini=0;
//     while(find(v.begin(),v.end(),false) != v.end()){
//         min=300;
//         mini=0;
//         if(!v[i]){
//             rest = limit - people[i];
//             v[i] = true;
//         }else{
//             i++;
//             continue;
//         }

//         for(int j=size-1;j>i;--j){
//             if(rest>=people[j] && !v[j] && min>=people[j]){
//                 min = people[j];
//                 mini = j;
//             }
//         }
        
//         rest -= min;
//         v[mini] = true;
        
//         answer++;
//         i++;
//     }
//     //나머지무게 = 무게제한 - 사람무게
//     //나머지무게 > 사람무게가 있다면 나머지무게 -= 사람무게
//     //없다면 못건너간 다음 사람
        
//     return answer;
// }