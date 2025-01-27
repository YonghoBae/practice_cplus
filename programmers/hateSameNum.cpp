#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int pre=arr[0];
    answer.push_back(pre);
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    for(auto a:arr){
        if(pre!=a){
            answer.push_back(a);
        }
        pre = a;
    }
    
    return answer;
}

// unique함수를 이용한 짧은 코드
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// vector<int> solution(vector<int> arr) 
// {

//     arr.erase(unique(arr.begin(), arr.end()),arr.end());

//     vector<int> answer = arr;
//     return answer;
// }