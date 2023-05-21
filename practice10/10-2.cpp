/***************************************************************/
/*             HW#7 : 상속                                 */
/*  작성자 : 배용호                    날짜 : 2023년 5월 21일  */
/*                                                                                     */
/* 문제 정의 :다음과 같은 배열을 선언하여 다음 실행결과가 나오도록 Circle을 상속받
은 NamedCircle 클래스와 main() 함수 등 필요한 함수를 작성하라.
NamedCircle pizza[5];

실행화면
5개의 정수 반지름과 원의 이름을 입력하세요.
1 >> 5 크림피자
2 >> 8 치즈피자
3 >> 25 대왕피자
4 >> 30 블랙홀피자
5 >> 15 마늘피자
가장 면적이 큰 피자는 블랙홀피자입니다.                                                   */
/*                - - - - - - -                                                      */
/***************************************************************/
#include<iostream>
#include<string>
using namespace std;


class Circle{
protected:
    int radius;
};//클래스 Circle

class NamedCircle:public Circle{
public:
    void Set(int r, string name){
        this->radius = r;
        this->circle_name = name;
    } //반지름, 이름 set함수
    int getradius(){
        return this->radius;
    } //반지름 get 함수
    string getname(){
        return this->circle_name;
    } //이름 get 함수
protected:
    string circle_name;
};//Circle 상속받은 NamedCircle 

string maxCircle(NamedCircle circle[5]){
    NamedCircle max = circle[0];
    for(int i=1;i<5;i++){
        if(max.getradius() < circle[i].getradius()){
            max = circle[i];
        }
    }
    return max.getname();
} //가장 면적이 큰 피자 출력하는 maxCircle 함수



int main(){
    NamedCircle pizza[5]; //객체배열 선언
    int r; 
    string name; //입력받을 r, name 선언
    cout << "5개의 정수 반지름과 원의 이름을 입력하세요." << endl;
    for(int i=0;i<5;i++){
        cout << i+1 << " >> ";
        cin >> r;
        getline(cin,name);
        pizza[i].Set(r,name);
    } //객체배열 반지름, 이름 설정
    cout << "가장 면적이 큰 피자는" << maxCircle(pizza) << "입니다." << endl; //면적이 큰 피자 출력
}