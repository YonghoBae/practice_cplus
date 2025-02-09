//programmers: 주식가격
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    int size = prices.size();
    
    int pre, cnt=0;
    for(int i=0;i<size;++i){
        pre = prices[i];
        
        for(int j=i+1;j<size;++j){
            cnt++;
            if(pre>prices[j])break;
        }
        
        answer.push_back(cnt);
        cnt=0;
    }
    
    return answer;
}

//입력: 초 단위 주식가격
//출력: 가격이 떨어지지 않는 시간

//스택을 이용해 풀이이
// #include <string>
// #include <vector>
// #include <stack>

// using namespace std;

// vector<int> solution(vector<int> prices) {
//     vector<int> answer(prices.size());
//     stack<int> s;
//     int size = prices.size();
//     for(int i=0;i<size;i++){
//         while(!s.empty()&&prices[s.top()]>prices[i]){
//             answer[s.top()] = i-s.top();
//             s.pop();
//         }
//         s.push(i);
//     }
//     while(!s.empty()){
//         answer[s.top()] = size-s.top()-1;
//         s.pop();
//     }
//     return answer;
// }