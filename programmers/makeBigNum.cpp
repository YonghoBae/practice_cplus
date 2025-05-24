//programmers: 큰 수 만들기
#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    string n = number;
    
    
    
    char pre = number[0];
    
    for(int i=1;i<number.size();++i){
        if(k==0) break;
        if(pre<number[i]){
            number.erase(number.begin()+i-1);
            i=0;
            k--;
        }
        pre = number[i];
    }
    
    if(k>0){
        number.erase(number.begin()+number.size()-k,number.end());
        k--;
    }
    
    answer = number;
    
    return answer;
}

// k개 의 수를 제거 후 가장 큰 숫자
// if 현재 수 < 다음 수이면 현재 수 삭제
// if (현재 수 < 다음 수인 경우의 수) < k이면 마지막부터 삭제
