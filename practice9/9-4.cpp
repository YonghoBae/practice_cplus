/***************************************************************/
/*             HW#8 : friend�� ������ �ߺ�                                 */
/*  �ۼ��� : ���ȣ                    ��¥ : 2023�� 5�� 24��  */
/*                                                                                     */
/* ���� ���� : 3���� == �����ڸ� friend �Լ��� �ۼ��϶�.
Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
// price ��
if(a == 30000) cout << "���� 30000��" << endl;
// å title ��
if(a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl;
// title, price, pages ��� ��
if(a == b) cout << "�� å�� ���� å�Դϴ�." << endl; 

������
���� 30000��
��ǰ C++ �Դϴ�.                                                     */
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
    } //������: title, price, pages �ʱ�ȭ
    void show() {
        cout << title << ' ' << price << "�� " <<pages << " ������" << endl;
    } //����, ����, ������ ���
    string getTitle() {
        return title;
    } // get�Լ�: title
    friend bool operator==(Book op, int price); //friend�Լ�: ���ݺ�
    friend bool operator==(Book op, string title); //friend�Լ�: �����
    friend bool operator==(Book op1, Book op2); //friend�Լ�: ��ü ��ü ��
};

bool operator==(Book op, int price){
    if(op.price == price){
        return true;
    }
     return false;
}
bool operator==(Book op, string title){
    if(op.title == title){
        return true;
    }
    return false;
}
bool operator==(Book op1, Book op2){
    if(op1.price == op2.price && op1.title == op2.title && op1.pages==op2.pages){
        return true;
    }
    return false;
}

int main(){
    Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
    // price ��
    if(a == 30000) cout << "���� 30000��" << endl;
    // å title ��
    if(a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl;
    // title, price, pages ��� ��
    if(a == b) cout << "�� å�� ���� å�Դϴ�." << endl;
}