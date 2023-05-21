/***************************************************************/
/*             HW#8 : 함수와 참조, 복사생성자                               */
/*  작성자 : 배용호                   날짜 : 2023년 5월 8일  */
/*                                                                                     */
/* 문제정의: 책의 이름과 가격을 저장하는 다음 Book 클래스이다. Book 클래스의 생
성자, 소멸자, set() 함수를 구현하고, 실행 결과를 참조하여 깊은 복사생
성자를 작성하라.
class Book {
    char *title; // 제목 문자열
    int price; // 가격
public:
    Book(char* title, int price);
    ~Book();
    void set(char* title, int price);
    void show() { cout << title << ' ' << price << "원" << endl; }
};
int main() {
    Book cpp("명품C++", 10000);
    Book java = cpp;
    java.set("명품자바", 12000);
    cpp.show();
    java.show();
}

실행화면:
명품C++ 10000원
명품자바 12000원                                                             */
/*                - - - - - - -                                                      */
/***************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

class Book {
	char* title; // 제목 문자열
	int price; // 가격
public:
	Book(const char* title, int price);
	~Book();
	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; }
};

Book::Book(const char* title, int price) {
	int len = strlen(title); // 입력받은 title 길이 len에 저장
	this->title = new char[len + 1]; // 객체 제목에 동적메모리할당
	strcpy(this->title, title); //객체 제목에 입력받은 title 복사 
	this->price = price; //객체 가격에 price 대입
}

Book::~Book() {
	if(title)
		delete[] title; //객체 title에 값이 있으면 메모리할당 해제
}

void Book::set(const char* title, int price) {
	int len = strlen(title); // 입력받은 title 길이 len에 저장
	this->title = new char[len + 1]; // 객체 제목에 동적메모리할당
	strcpy(this->title, title); //객체 제목에 입력받은 title 복사 
	this->price = price; //객체 가격에 price 대입
}

int main() {
	Book cpp("명품C++", 10000); //객체 cpp생성 및 초기화
	Book java = cpp; //객체 java 복사 생성자를 통해 cpp로 초기화
	java.set("명품자바어쩌구저쩌구", 12000); //java 제목, 가격 설정
	cpp.show(); // cpp 제목, 가격 출력
	java.show(); // java 제목, 가격 출력
}
