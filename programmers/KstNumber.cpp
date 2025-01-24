#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> result;

    for(auto command:commands){
        int i=command[0], j=command[1], k=command[2];
        answer.resize(0);
        for(int s=i-1;s<j;++s){
            answer.push_back(array[s]);
        }
        sort(answer.begin(),answer.end());
        result.push_back(answer[k-1]);
    }
    return result;
}


//깔끔한 코드 버전
//처음에는 이런 방식을 생각했는데 문제를 잘못 이해해서 실패
// #include <string>
// #include <vector>
// #include <algorithm>

// using namespace std;

// vector<int> solution(vector<int> array, vector<vector<int>> commands) {
//     vector<int> answer;
//     vector<int> temp;

//     for(int i = 0; i < commands.size(); i++) {
//         temp = array;
//         sort(temp.begin() + commands[i][0] - 1, temp.begin() + commands[i][1]);
//         answer.push_back(temp[commands[i][0] + commands[i][2]-2]);
//     }

//     return answer;
// }