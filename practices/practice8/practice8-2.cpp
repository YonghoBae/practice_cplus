/***************************************************************/
/*             HW#8 : 함수와 참조, 복사생성자                               */
/*  작성자 : 배용호                   날짜 : 2023년 5월 8일  */
/*                                                                                     */
/* 문제정의: 키보드로부터 반지름 값을 읽어 Circle 객체에 반지름을 설정하는 전역함
수인 readRadius() 함수를 구현하여 전체 프로그램을 완성하시오.
class Circle {
    int radius;
public:
    Circle() { radius = 1; }
    Circle(int radius) { this->radius = radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14*radius*radius; }
};
int main() {
    Circle donut;
    readRadius(donut);
    cout << "donut의 면적 = " <<donut.getArea() << endl;
    
실행예시:
    정수 값으로 반지름을 입력하세요>>3
    donut의 면적 = 28.26
}                                                                */
/*                - - - - - - -                                                      */
/***************************************************************/
#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; } //생성자, 객체반지름을 1로 초기화
	Circle(int radius) { this->radius = radius; } //생성자, 객체반지름을 radius로 초기화
	void setRadius(int radius) { this->radius = radius; } //멤버변수, 객체반지름에 radius 대입
	double getArea() { return 3.14 * radius * radius; } //멤버변수 면적 리턴
};

void readRadius(Circle& c) {
	int r;
	cout << "정수 값으로 반지름을 입력하세요>>";
	cin >> r;
	c.setRadius(r);
} //전역변수, Circle 객체를 래퍼런스로 받고 입력받아서 객체의 반지름 설정

int main() {
	Circle donut; //객체 donut 선언
	readRadius(donut); //donut의 반지름 입력 후 대입
	cout << "donut의 면적 = " << donut.getArea() << endl; //donut의 면적 출력
}