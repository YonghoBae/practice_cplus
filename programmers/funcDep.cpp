#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    int size=speeds.size(),cnt=1;
    vector<int> answer;
    vector<int> deploy(size,1);

    for(int i=0;i<size;++i){
        deploy[i] = (100-progresses[i]+speeds[i]-1)/speeds[i];
    }
    
    
    int maxdeploy = deploy[0];
    for(int i=1;i<size;++i){
        if(maxdeploy>=deploy[i]){
            cnt++;
        }else{
            answer.push_back(cnt);
            cnt=1;
            maxdeploy=deploy[i];
        }
    }
    answer.push_back(cnt);
    
    return answer;
}

// 이렇게 짧게 끝나는 코드인줄 몰랐네
// #include <string>
// #include <vector>
// #include <iostream>
// using namespace std;

// vector<int> solution(vector<int> progresses, vector<int> speeds) {
//     vector<int> answer;

//     int day;
//     int max_day = 0;
//     for (int i = 0; i < progresses.size(); ++i)
//     {
//         day = (99 - progresses[i]) / speeds[i] + 1;

//         if (answer.empty() || max_day < day)
//             answer.push_back(1);
//         else
//             ++answer.back();

//         if (max_day < day)
//             max_day = day;
//     }

//     return answer;
// }