//1541번 미해결
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    //숫자, 연산자 분리

    string num;
    int n, op;
    vector<int> result;
    int temp=0;

    for(auto ch:s){
        if(isdigit(ch)){
          num += ch;
        }else{
            n = stoi(num);
            num="";
            if(ch=='+'){
                temp += n;
            }else{
                result.push_back(temp);
                temp = 0;
            }

            cout << temp << " " << n << endl;
        }
    }


    temp =0;
    for(int i=0;i<result.size();++i){
        if(i==0){
            temp = result[i];
        }else{
            temp -= result[i];
        }
    }

    cout << temp;

    //55 50 40 40
    // + - +
    //
}

//설명
// 1.양수, +, -, (, ) -> 식 만들기
// 2.괄호 삭제
// 3.괄호 삽입 -> 최소

//방법
//1.- 뒤를 괄호로 묶음
