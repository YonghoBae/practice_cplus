/***************************************************************/
/*             HW#8 : �Լ��� ����, ���������                               */
/*  �ۼ��� : ���ȣ                   ��¥ : 2023�� 5�� 8��  */
/*                                                                                     */
/* ��������: å�� �̸��� ������ �����ϴ� ���� Book Ŭ�����̴�. Book Ŭ������ ��
����, �Ҹ���, set() �Լ��� �����ϰ�, ���� ����� �����Ͽ� ���� �����
���ڸ� �ۼ��϶�.
class Book {
    char *title; // ���� ���ڿ�
    int price; // ����
public:
    Book(char* title, int price);
    ~Book();
    void set(char* title, int price);
    void show() { cout << title << ' ' << price << "��" << endl; }
};
int main() {
    Book cpp("��ǰC++", 10000);
    Book java = cpp;
    java.set("��ǰ�ڹ�", 12000);
    cpp.show();
    java.show();
}

����ȭ��:
��ǰC++ 10000��
��ǰ�ڹ� 12000��                                                             */
/*                - - - - - - -                                                      */
/***************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

class Book {
	char* title; // ���� ���ڿ�
	int price; // ����
public:
	Book(const char* title, int price);
	~Book();
	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "��" << endl; }
};

Book::Book(const char* title, int price) {
	int len = strlen(title); // �Է¹��� title ���� len�� ����
	this->title = new char[len + 1]; // ��ü ���� �����޸��Ҵ�
	strcpy(this->title, title); //��ü ���� �Է¹��� title ���� 
	this->price = price; //��ü ���ݿ� price ����
}

Book::~Book() {
	if(title)
		delete[] title; //��ü title�� ���� ������ �޸��Ҵ� ����
}

void Book::set(const char* title, int price) {
	int len = strlen(title); // �Է¹��� title ���� len�� ����
	this->title = new char[len + 1]; // ��ü ���� �����޸��Ҵ�
	strcpy(this->title, title); //��ü ���� �Է¹��� title ���� 
	this->price = price; //��ü ���ݿ� price ����
}

int main() {
	Book cpp("��ǰC++", 10000); //��ü cpp���� �� �ʱ�ȭ
	Book java = cpp; //��ü java ���� �����ڸ� ���� cpp�� �ʱ�ȭ
	java.set("��ǰ�ڹپ�¼����¼��", 12000); //java ����, ���� ����
	cpp.show(); // cpp ����, ���� ���
	java.show(); // java ����, ���� ���
}
