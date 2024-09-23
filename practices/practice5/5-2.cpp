/***************************************************************/
/*             HW#4 : 생성자와 소멸자, 분할컴파일                        */
/*  작성자 : 배용호                    날짜 : 2023년 4월 16일             */
/*                                                                       */
/* 문제 정의 : Oval 클래스는 주어진 사각형에 내접하는 타원을 추상화한 클래스이다.
Oval 클래스의 멤버는 모두 다음과 같다. Oval 클래스를 선언부와 구현부
로 나누어 작성하라.           
• 정수값의 사각형 너비와 높이를 가지는 width, height 변수 멤버
• 너비와 높이값을 매개변수로 받는 생성자
• 너비와 높이를 1로 초기화하는 매개변수 없는 생성자
• width와 height를 출력하는 소멸자
• 타원의 너비를 리턴하는 getWidth() 함수멤버
• 타원의 높이를 리턴하는 getHeight() 함수멤버
• 타원의 너비와 높이를 변경하는 set(int w, int h) 함수멤버
• 타원의 너비와 높이를 화면에 출력하는 show() 함수멤버                          */
/*                - - - - - - -                                   */
/***************************************************************/
#include<iostream> //헤더파일 iostream 포함
using namespace std; // std생략

class Oval {
	int width;
	int height; //멤버변수 width,height 선언
public:
	Oval(); //기본생성자 선언
	Oval(int w, int h); //생성자 선언(인자 w,h)
	~Oval(); //기본소멸자 선언
	int getWidth(); //멤버함수 getWidth 선언
	int getHeight(); //멤버함수 getHeight 선언
	void set(int w, int h); //멤버함수 set 선언(인자 w,h)
	void show(); //멤버함수 show 선언
}; //class Oval선언부

Oval::Oval() {
	width = 1;
	height = 1;
} //기본생성자 Oval 구현, width,height 각각 1로 초기화

Oval::Oval(int w, int h) {
	width = w;
	height = h;
} // Oval 생성자 구현(인자 w,h), width,height 각각 w,h로 초기화

Oval::~Oval() {
	cout << "Oval ¼Ò¸ê : width = " << width << ", height = " << height << endl;
} //기본소멸자 ~Oval 구현, 객체소멸할때 각 객체의 width, height 출력

int Oval::getWidth() {
	return width;
} //Oval멤버함수 getWidth구현, width리턴

int Oval::getHeight() {
	return height;
} //Oval멤버함수 getWidth구현, height리턴

void Oval::set(int w, int h) {
	width = w;
	height = h;
} // Oval멤버함수 set구현, width,height 각각 w,h 대입

void Oval::show() {
	cout << "width = " << width << ", height = " << height << endl;
} // Oval멤버함수 show구현, width, height 각각 출력

int main() {
	Oval a, b(3, 4); //객체 a,b선언, a.width=1,a.height=1, b.width=3,b.height=4
	a.set(10, 20); //a.width=10,a.height=20
	a.show(); // a.width, a.height 출력
	cout << b.getWidth() << ", " << b.getHeight() << endl; //b.width, b.height 출력
}
