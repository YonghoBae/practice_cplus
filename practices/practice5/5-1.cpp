/***************************************************************/
/*             HW#4 : �����ڿ� �Ҹ���, ����������                                 */
/*  �ۼ��� : ���ȣ                    ��¥ : 2023�� 4�� 16��  */
/*                                                                                     */
/* ���� ���� :  ���� main() �Լ��� �� �۵��ϵ��� Rectangle Ŭ������ �ۼ��ϰ� ���α�
���� �ϼ��϶�. Rectangle Ŭ������ width�� height�� �� ��� ������ 3 ��
�� ������, �׸��� isSquare() �Լ��� ������.                                             */
/*                - - - - - - -                                                      */
/***************************************************************/
#include<iostream> //������� iostream ����
using namespace std; // std����

class Rectangle {
public:
	int width;
	int height; //������� width, height ����
	Rectangle(){
		width = 1;
		height = 1;
	}
	Rectangle(int w);
	Rectangle(int w, int h); //������ 3�� �ߺ� ����
	bool isSquare(); //����Լ� isSquare ����
}; //class Rectangle ����

//Rectangle::Rectangle()  //�⺻�������� �� width ����, height ���� 1����

Rectangle::Rectangle(int w) {
	width = w;
	height = w;
} //�Ű����� w�� ���� ������ ����, width, height ���� w����

Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
} //�Ű����� w,h�� ���� ������ ����, width, height ���� w, h����

bool Rectangle::isSquare() {
	if (width == height){
		return true;
	}
	else {
		return false;
	}
} //���簢�������ƴ��� ������ ����


int main() {
	Rectangle rect1; //��ü rect1����, rect1.width, rect1.height ���� 1����
	Rectangle rect2(3, 5); //��ü rect2����, rect2.width, rect2.height ���� 3,5����
	Rectangle rect3(3); //��ü rect3����, rect3.width, rect3.height ���� 3,3����
	if (rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
	if (rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
	if (rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;//rect1, rect2, rect3 ���簢�� ���� Ȯ�� �� ���̸� ���ڿ� ��� �����̸� ���x
}
