//프로그래머스: 의상
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;
    answer = 1;
    unordered_map<string,int> c;
    for(auto ca:clothes){
        c[ca[1]]++;
    }
    for(auto ca:c){
        answer = answer * (ca.second+1);
    }
    answer--;

    return answer;
}

// 매일 다른 옷 = {얼굴, 상의, 하의, 겉옷}
// 의상 수 = 30개, 의상 이름 길이 = 20 (알파벳 소문자 or '-'), 중복X