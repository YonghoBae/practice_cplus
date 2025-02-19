#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;

    stack<char> ss;
    int size = s.size();
    
    for(int i=0;i<size;++i){
        if(!ss.empty() &&ss.top()=='('&&s[i]==')'){
            ss.pop();
        }else{
            ss.push(s[i]);
        }
    }
    
    if(!ss.empty()){
        answer = false;
    }
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}
// 예외처리 극값을 좀 더 유의할 필요가 있음음

// 그냥 if문으로 돌아가네네
// #include<string>
// #include <iostream>

// using namespace std;

// bool solution(string s)
// {
//     int n = 0;
//     for (int i = 0; i < s.length(); i++) {
//         if (n < 0)
//             return false;
//         if (s[i] == '(')
//             n++;
//         else if (s[i] == ')')
//             n--;
//     }
//     return n == 0;
// }
