/***************************************************************/
/*             HW#10 : 가상함수와 추상클래스                                */
/*  작성자 : 배용호                    날짜 : 2023년 6월 4일  */
/*                                                                                     */
/* 문제 정의 : ? 다음 코드와 실행 결과를 참고하여 추상 클래스 Calculator를 상속받는
Adder와 Subractor 클래스를 구현하라
#include <iostream>
using namespace std;
class Calculator {
void input() {
cout << "정수 2 개를 입력하세요>> ";
cin >> a >> b;
}
protected:
int a, b;
virtual int calc(int a, int b) = 0; // 두 정수의 합 리턴
public:
void run() {
input();
cout << "계산된 값은 " << calc(a, b) << endl;
}
};
int main() {
Adder adder;
Subtractor subtractor;
adder.run();
subtractor.run();
}
실행화면
정수 2 개를 입력하세요>> 5 3
계산된 값은 8
정수 2 개를 입력하세요>> 5 3
계산된 값은 2
                         */
/*                - - - - - - -                                                      */
/***************************************************************/
#include <iostream>
using namespace std;

class Calculator {
    /*a,b 입력받는 멤버함수*/
    void input() {
        cout << "정수 2 개를 입력하세요>> ";
        cin >> a >> b;
    }
protected:
    int a, b;
    virtual int calc(int a, int b) = 0; // 두 정수의 합 리턴
public:
    /*입력과 계산된 값 출력하는 멤버함수*/
    void run() {
        input();
        cout << "계산된 값은 " << calc(a, b) << endl;
    }
};

/*Calculator 상속받은 Adder*/
class Adder: public Calculator{
public:
    /*가상함수, a+b리턴 멤버함수*/
    virtual int calc(int a, int b){
        return a+b;
    }
};

class Subractor: public Calculator{
public:
    /*가상함수, a-b리턴 멤버함수*/
    virtual int calc(int a, int b){
        return a-b;
    }
};

int main() {
    Adder adder;
    Subractor subractor;
    adder.run();
    subractor.run();
}
