/***************************************************************/
/*             HW#8 : 함수와 참조, 복사생성자                               */
/*  작성자 : 배용호                   날짜 : 2023년 5월 8일  */
/*                                                                                    */
/* 문제정의: 클래스 Accumulator는 add() 함수를 통해 계속 값을 누적하는 클래스로
서, 다음과 같이 선언된다. Accumulator 클래스를 구현하여 전체 프로그
램을 완성하시오.
class Accumulator {
    int value;
public:
    Accumulator(int value); // 매개변수 value로 멤버 value를 초기화한다.
    Accumulator& add(int n); // value에 n을 더해 값을 누적한다.
    int get(); // 누적된 값 value를 리턴한다.
};
int main() {
    Accumulator acc(10);
    acc.add(5).add(6).add(7); // acc의 value 멤버가 28이 된다.
    cout << acc.get() << endl; // 28 출력
}

실행화면:
28                                                       */
/*                - - - - - - -                                                      */
/***************************************************************/

#include<iostream>
using namespace std;

class Accumulator {
	int value;
public:
	Accumulator(int value); // 생성자, 매개변수 value로 멤버 value를 초기화한다.
	Accumulator& add(int n); // 멤버함수, value에 n을 더해 값을 누적한다.
	int get(); // 멤버함수, 누적된 값 value를 리턴한다.
};

Accumulator::Accumulator(int value) {
	this->value = value; //객체 value를 인자 value로 초기화
}

Accumulator& Accumulator::add(int n) {
	this->value += n; //객체 value에 n값 누적
	return *this; //해당 객체 래퍼런스 리턴
}

int Accumulator::get() {
	return this->value; //해당 객체 value 리턴
}

int main() {
	Accumulator acc(10); // 객체 acc 생성 및 value값 10으로 초기화
	acc.add(5).add(6).add(7); // acc의 value 멤버가 28이 된다.
	cout << acc.get() << endl; // 28 출력
}