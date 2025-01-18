//프로그래머스: 완주하지 못한 선수
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> com;
    for(auto name:completion){
        com[name]++;
    }
    for(auto name:participant){
        if(com[name]>0){
            com[name]--;
        }else{
            answer = name;
            break;
        }
    }
    return answer;
}

//참여자 participant 1~100,000
//완주자 completion participant-1
//이름 1~20 알파벳 소문자 동명이인가능

//참여자 완주자 각각 정렬 후 비교
//생각하면 구현은 쉬운데 왜 생각을 못 했을까 => 문제 카테고리에 너무 집착한듯
// #include <string>
// #include <vector>
// #include <algorithm>

// using namespace std;

// string solution(vector<string> participant, vector<string> completion) {
//     string answer = "";
//     sort(participant.begin(), participant.end());
//     sort(completion.begin(), completion.end());
//     for(int i=0;i<completion.size();i++)
//     {
//         if(participant[i] != completion[i])
//             return participant[i];
//     }
//     return participant[participant.size() - 1];
//     //return answer;
// }