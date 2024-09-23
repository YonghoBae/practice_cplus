/***************************************************************/
/*             HW#8 : friend와 연산자 중복                                 */
/*  작성자 : 배용호                    날짜 : 2023년 5월 24일  */
/*                                                                                     */
/* 문제 정의 : 3개의 == 연산자를 friend 함수로 작성하라.
Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
// price 비교
if(a == 30000) cout << "정가 30000원" << endl;
// 책 title 비교
if(a == "명품 C++") cout << "명품 C++ 입니다." << endl;
// title, price, pages 모두 비교
if(a == b) cout << "두 책이 같은 책입니다." << endl; 

실행결과
정가 30000원
명품 C++ 입니다.                                                     */
/*                - - - - - - -                                                      */
/***************************************************************/

#include<iostream>
#include<string>
using namespace std;

class Book {
    string title;
    int price;
    int pages;
public:
    Book(string title="", int price=0, int pages=0) {
        this->title = title; this->price = price; this->pages = pages;
    } //생성자: title, price, pages 초기화
    void show() {
        cout << title << ' ' << price << "원 " <<pages << " 페이지" << endl;
    } //제목, 가격, 페이지 출력
    string getTitle() {
        return title;
    } // get함수: title
    friend bool operator==(Book op, int price); //friend함수: 가격비교
    friend bool operator==(Book op, string title); //friend함수: 제목비교
    friend bool operator==(Book op1, Book op2); //friend함수: 객체 전체 비교
};

bool operator==(Book op, int price){
    if(op.price == price){
        return true;
    }
     return false;
}
bool operator==(Book op, string title){
    if(op.title == title){
        return true;
    }
    return false;
}
bool operator==(Book op1, Book op2){
    if(op1.price == op2.price && op1.title == op2.title && op1.pages==op2.pages){
        return true;
    }
    return false;
}

int main(){
    Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
    // price 비교
    if(a == 30000) cout << "정가 30000원" << endl;
    // 책 title 비교
    if(a == "명품 C++") cout << "명품 C++ 입니다." << endl;
    // title, price, pages 모두 비교
    if(a == b) cout << "두 책이 같은 책입니다." << endl;
}