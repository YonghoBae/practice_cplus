/***************************************************************/
/*             HW#4 : 생성자와 소멸자, 분할컴파일                                 */
/*  작성자 : 배용호                    날짜 : 2023년 4월 16일  */
/*                                                                                     */
/* 문제 정의 :  다음 main() 함수가 잘 작동하도록 Rectangle 클래스를 작성하고 프로그
램을 완성하라. Rectangle 클래스는 width와 height의 두 멤버 변수와 3 개
의 생성자, 그리고 isSquare() 함수를 가진다.                                             */
/*                - - - - - - -                                                      */
/***************************************************************/
#include<iostream> //헤더파일 iostream 포함
using namespace std; // std생략

class Rectangle {
public:
	int width;
	int height; //멤버변수 width, height 선언
	Rectangle(){
		width = 1;
		height = 1;
	}
	Rectangle(int w);
	Rectangle(int w, int h); //생성자 3개 중복 선언
	bool isSquare(); //멤버함수 isSquare 선언
}; //class Rectangle 선언

//Rectangle::Rectangle()  //기본생성자일 떄 width 구현, height 각각 1대입

Rectangle::Rectangle(int w) {
	width = w;
	height = w;
} //매개변수 w를 가진 생성자 구현, width, height 각각 w대입

Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
} //매개변수 w,h를 가진 생성자 구현, width, height 각각 w, h대입

bool Rectangle::isSquare() {
	if (width == height){
		return true;
	}
	else {
		return false;
	}
} //정사각형인지아닌지 참거짓 리턴


int main() {
	Rectangle rect1; //객체 rect1선언, rect1.width, rect1.height 각각 1대입
	Rectangle rect2(3, 5); //객체 rect2선언, rect2.width, rect2.height 각각 3,5대입
	Rectangle rect3(3); //객체 rect3선언, rect3.width, rect3.height 각각 3,3대입
	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;//rect1, rect2, rect3 정사각형 여부 확인 후 참이면 문자열 출력 거짓이면 출력x
}
