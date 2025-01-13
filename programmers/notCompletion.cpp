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