//programmers: 카펫

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    int x, y=0, by=brown+yellow;
    
    for(x=3;x<brown+yellow;++x){
        if(by%x != 0) continue;
        y = by/x;
        if((x+y-2)*2 <= brown && (x-2)*(y-2) <= yellow) break; 
    }
    
    answer.push_back(y);
    answer.push_back(x);
    return answer;
}

// 입력: 갈색, 노란색 격자 수
// 48 24*2 12*4 8*6 



// while문으로 푼거 같은데 깔끔하긴한데 직관적이지는 않은듯듯
// #include <string>
// #include <vector>

// using namespace std;

// vector<int> solution(int brown, int red) {

//     int len = brown / 2 + 2;

//     int w = len - 3;
//     int h = 3;

//     while(w >= h){
//         if(w * h == (brown + red)) break;

//         w--;
//         h++;
//     }

//     return vector<int>{w, h};
// }