/***************************************************************/
/*             HW#10 : 가상함수와 추상클래스                                */
/*  작성자 : 배용호                    날짜 : 2023년 6월 4일  */
/*                                                                                     */
/* 문제 정의 : Shape 클래스를 상속받아 타원을 표현하는 Oval, 사각형을 표현하는
Rect, 삼각형을 표현하는 Trianglar 클래스를 작성하라. main()을 작성하고
실행하면 다음과 같다.
int main() {
Shape *p[3];
p[0] = new Oval("빈대떡", 10, 20);
p[1] = new Rect("찰떡", 30, 40);
p[2] = new Triangular("토스트", 30, 40);
for(int i=0; i<3; i++)
cout << p[i]→getName() << " 넓이는 " << p[i]→getArea() << endl;
for(int i=0; i<3; i++) delete p[i];
}
실행화면
빈대떡 넓이는 628
찰떡 넓이는 1200
토스트 넓이는 600                           */
/*                - - - - - - -                                                      */
/***************************************************************/
#include<iostream>
#include<string>
using namespace std;

/*class Shape*/
class Shape{
protected:
    string name;
public:
    string getName(){
        return name;
    }
    virtual float getArea()=0;
};


/*Shape 상속받은 class Oval*/
class Oval: public Shape{
protected:
    int semi_major_axis, semi_minor_axis;
public:
    /*이름, 장축, 단축 초기화 생성자*/
    Oval(string name,int semi_major_axis,int semi_minor_axis){
        this->name=name;
        this->semi_major_axis=semi_major_axis;
        this->semi_minor_axis=semi_minor_axis;
    }
    /*이름 get함수*/
    string getName(){
        return name;
    }
    /*가상함수 넓이 get함수*/
    float getArea(){
        return semi_major_axis*semi_minor_axis*3.14;
    }
};

/*Shape 상속받은 class Rect*/
class Rect: public Shape{
protected:
    int height ,width;
public:
    /*이름, 높이, 밑변 초기화 생성자*/
    Rect(string name,int height,int width){
        this->name=name;
        this->height=height;
        this->width=width;
    }
    /*이름 get함수*/
    string getName(){
        return name;
    }
    /*가상함수 넓이 get함수*/
    float getArea(){
        return height*width;
    }
};

/*Shape 상속받은 class Triangular*/
class Triangular: public Shape{
protected:
    int height ,width;
public:
    /*이름, 높이, 밑변 초기화 생성자*/
    Triangular(string name,int height,int width){
        this->name=name;
        this->height=height;
        this->width=width;
    }
    /*이름 get함수*/
    string getName(){
        return name;
    }
    /*가상함수 넓이 get함수*/
    float getArea() {
        return height*width/2;
    }
};

int main() {
    Shape *p[3]; //class Shape 객체포인터 배열 선언
    /*class형 변환*/
    p[0] = new Oval("빈대떡", 10, 20);
    p[1] = new Rect("찰떡", 30, 40);
    p[2] = new Triangular("토스트", 30, 40);
    /*객체배열의 각 이름, 넓이 출력*/
    for(int i=0; i<3; i++)
        cout << p[i]->getName() << " 넓이는 " << p[i]->getArea() << endl;
    for(int i=0; i<3; i++) delete p[i]; //동적메모리할당 해제
}