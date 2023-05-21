/***************************************************************/
/*             HW#7 : 개선된 함수 기능                                 */
/*  작성자 : 배용호                    날짜 : 2023년 5월 7일  */
/*                                                                                     */
/* 문제 정의 :
다음과 같이 원을 추상화한 Circle 클래스가 있다. Circle 클래스와 main()
함수를 작성하고 3개의 Circle 객체를 가진 배열을 선언하고, 반지름 값을
입력받고 면적이 100보다 큰 원의 개수를 출력하는 프로그램을 완성하라.
Circle 클래스도 완성하라.

class Circle {
int radius; // 원의 반지름 값
public:
void setRadius(int radius); // 반지름을 설정한다.
double getArea(); // 면적을 리턴한다.
};

실행결과
원 1의 반지름 >> 5
원 2의 반지름 >> 6
원 3의 반지름 >> 7
면적이 100보다 큰 원 2개입니다.                                                                   */
/*                - - - - - - -                                                      */
/***************************************************************/

#include<iostream>
using namespace std;

class Circle {
    int radius; // 원의 반지름 값
public:
    void setRadius(int radius){
        this->radius = radius;            
    }// 반지름을 설정한다.
    double getArea(){
        return 3.14*radius*radius;
    }// 면적을 리턴한다.
};

int main(){
    Circle c[3]; //객체 3개 생성
    int count = 0; // 면적이 10보다 큰 원 개수 카운트 변수
    int r;//입력받을 반지름 변수
    for(int i=0;i<3;i++){
        cout << "원 " << i <<"의 반지름>> ";
        cin >> r;
        c[i].setRadius(r);
    }
    // c[0],c[1],c[2] 각각 입력
    for(int i=0;i<3;i++){
        if(c[i].getArea() > 100){
            count++;
        }
    }
    // 면적이 100보다 큰 원 개수 카운팅
    cout << "면적이 100보다 큰 원 " << count << "개 입니다." <<endl;
    // 면적이 100보다 큰 원 개수 출력
}