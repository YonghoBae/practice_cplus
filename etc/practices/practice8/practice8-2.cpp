/***************************************************************/
/*             HW#8 : �Լ��� ����, ���������                               */
/*  �ۼ��� : ���ȣ                   ��¥ : 2023�� 5�� 8��  */
/*                                                                                     */
/* ��������: Ű����κ��� ������ ���� �о� Circle ��ü�� �������� �����ϴ� ������
���� readRadius() �Լ��� �����Ͽ� ��ü ���α׷��� �ϼ��Ͻÿ�.
class Circle {
    int radius;
public:
    Circle() { radius = 1; }
    Circle(int radius) { this->radius = radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14*radius*radius; }
};
int main() {
    Circle donut;
    readRadius(donut);
    cout << "donut�� ���� = " <<donut.getArea() << endl;
    
���࿹��:
    ���� ������ �������� �Է��ϼ���>>3
    donut�� ���� = 28.26
}                                                                */
/*                - - - - - - -                                                      */
/***************************************************************/
#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; } //������, ��ü�������� 1�� �ʱ�ȭ
	Circle(int radius) { this->radius = radius; } //������, ��ü�������� radius�� �ʱ�ȭ
	void setRadius(int radius) { this->radius = radius; } //�������, ��ü�������� radius ����
	double getArea() { return 3.14 * radius * radius; } //������� ���� ����
};

void readRadius(Circle& c) {
	int r;
	cout << "���� ������ �������� �Է��ϼ���>>";
	cin >> r;
	c.setRadius(r);
} //��������, Circle ��ü�� ���۷����� �ް� �Է¹޾Ƽ� ��ü�� ������ ����

int main() {
	Circle donut; //��ü donut ����
	readRadius(donut); //donut�� ������ �Է� �� ����
	cout << "donut�� ���� = " << donut.getArea() << endl; //donut�� ���� ���
}