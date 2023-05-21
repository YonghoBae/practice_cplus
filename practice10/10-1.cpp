/***************************************************************/
/*             HW#7 : 상속                                 */
/*  작성자 : 배용호                    날짜 : 2023년 5월 21일  */
/*                                                                                     */
/* 문제 정의 :다음 코드가 실행되도록 Circle을 상속받은 NamedCircle 클래스를 작성하
고 전체 프로그램을 완성하라.   
int main() {
NamedCircle waffle(3, "waffle"); // 반지름이 3이고 이름이 waffle인 원
waffle.show();
}

실행화면
반지름이 3인 waffle                                                     */
/*                - - - - - - -                                                      */
/***************************************************************/
#include<iostream>
#include<string>
using namespace std;

class Circle{
public:
    int radius;
}; //클래스 Circle

class NamedCircle:public Circle{
public:
    NamedCircle(); //기본생성자
    NamedCircle(int r, string name); //반지름, 이름 초기화 생성자
    int show(); //반지름, 이름 출력
    string circle_name; //원이름
}; // Circle 상속받은 NamedCircle 

NamedCircle::NamedCircle(){
}

NamedCircle::NamedCircle(int r, string name){
    this->radius = r;
    this->circle_name = name;
}

int NamedCircle::show(){
    cout << "반지름이 " << this->radius << "인 " << this->circle_name << endl;
    return 0;
}

int main() {
    NamedCircle waffle(3, "waffle"); // 반지름이 3이고 이름이 waffle인 원
    waffle.show(); // waffle 출력
}
