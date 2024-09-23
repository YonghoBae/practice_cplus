#include<iostream>
#include<string>
using namespace std;

/*
class Book 제목, 가격, 페이지
생성자: (인자:제목, 가격, 페이지)
연산자함수: operator +=, -=
멤버함수: show => 제목, 가격, 페이지 출력
get함수: getTitle => 제목 리턴
*/
class Book {
    string title;
    int price;
    int pages;
public:
    Book(string title="", int price=0, int pages=0) {
        this->title = title; this->price = price; this->pages = pages;
    }
    Book operator+=(int price){
        this->price += price;
        return *this;
    }
    Book operator-=(int price){
        this->price -= price;
        return *this;
    }
    void show() {
        cout << title << ' ' << price << "원 " <<pages << " 페이지" << endl;
    }
    string getTitle() {
        return title;
    }
};

int main(){
    Book a("청춘", 20000, 300), b("미래", 30000, 500);
    a += 500; // 책 a의 가격 500원 증가
    b -= 500; // 책 b의 가격 500원 감소
    a.show();
    b.show();
}