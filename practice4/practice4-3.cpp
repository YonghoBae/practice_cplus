#include <iostream> // ������� iostream ����
using namespace std; // std ����

class Rectangle
{
public:
    int width;
    int height;
    int getArea();
}; //class Rectangle ����(���� int�� width,height/ �Լ�getArea)

int Rectangle::getArea()
{
    return width * height;
} //getArea() ����

int main()
{
    Rectangle rect; //Rectangle rect ���� ����
    rect.width = 3; // rect�� width�� 3����
    rect.height = 5; // rect�� height�� 5����
    cout << "�簢���� ������ " << rect.getArea() << endl; // rect�� ����� ���� ���(=width*height)
}