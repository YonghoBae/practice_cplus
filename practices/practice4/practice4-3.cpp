#include <iostream> // 헤더파일 iostream 포함
using namespace std; // std 생략

class Rectangle
{
public:
    int width;
    int height;
    int getArea();
}; //class Rectangle 설정(변수 int형 width,height/ 함수getArea)

int Rectangle::getArea()
{
    return width * height;
} //getArea() 정의

int main()
{
    Rectangle rect; //Rectangle rect 변수 선언
    rect.width = 3; // rect의 width에 3대입
    rect.height = 5; // rect의 height에 5대입
    cout << "사각형의 면적은 " << rect.getArea() << endl; // rect의 사격형 면적 출력(=width*height)
}