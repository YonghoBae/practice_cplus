/***************************************************************/
/*             HW#8 : friend와 연산자 중복                                 */
/*  작성자 : 배용호                    날짜 : 2023년 5월 24일  */
/*                                                                                     */
/* 문제 정의 :3개의 == 연산자 함수를 가진 Book 클래스를 작성하라.
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
    bool operator==(int price){
        if(this->price == price){
            return true;
        }
        return false;
    } //연산자함수: 가격비교
    bool operator==(string title){
        if(this->title == title){
            return true;
        }
        return false;
    } //연산자함수: 제목비교
    bool operator==(Book op){
        if(this->price == op.price && this->title == op.title && this->pages == op.pages){
            return true;
        }
        return false;
    } //연산자함수: 객체 값 전체 비교 
    void show() {
        cout << title << ' ' << price << "원 " <<pages << " 페이지" << endl;
    } // 제목, 가격, 페이지 출력
    string getTitle() {
        return title;
    } // get함수: title
};

int main(){
    Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
    // price 비교
    if(a == 30000) cout << "정가 30000원" << endl;
    // 책 title 비교
    if(a == "명품 C++") cout << "명품 C++ 입니다." << endl;
    // title, price, pages 모두 비교
    if(a == b) cout << "두 책이 같은 책입니다." << endl;
}