/***************************************************************/
/*             HW#8 : friend와 연산자 중복                                 */
/*  작성자 : 배용호                    날짜 : 2023년 5월 24일  */
/*                                                                                     */
/* 문제 정의 : 다음 연산을 통해 공짜 책인지를 판별하는 !연산자를 작성하라 
Book book("벼룩시장", 0, 50); // 가격은 0
if(!book) cout << "공짜다" << endl;

실행화면
공짜다                                                   */
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
    }//생성자함수: 제목, 가격, 페이지 비교
    bool operator!(){
        if(this->price == 0){
            return true;
        }
        return false;
    }//연산자함수: 가격이 0인지 아닌지
    void show() {
        cout << title << ' ' << price << "원 " <<pages << " 페이지" << endl;
    }//제목, 가격, 페이지 출력
    string getTitle() {
        return title;
    }//get함수: 제목 리턴
};

int main(){
    Book book("벼룩시장", 0, 50); // 가격은 0
    if(!book) cout << "공짜다" << endl;
}