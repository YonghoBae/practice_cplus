/***************************************************************/
/*             HW#8 : friend�� ������ �ߺ�                                 */
/*  �ۼ��� : ���ȣ                    ��¥ : 2023�� 5�� 24��  */
/*                                                                                     */
/* ���� ���� :3���� == ������ �Լ��� ���� Book Ŭ������ �ۼ��϶�.
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
    bool operator==(int price){
        if(this->price == price){
            return true;
        }
        return false;
    } //�������Լ�: ���ݺ�
    bool operator==(string title){
        if(this->title == title){
            return true;
        }
        return false;
    } //�������Լ�: �����
    bool operator==(Book op){
        if(this->price == op.price && this->title == op.title && this->pages == op.pages){
            return true;
        }
        return false;
    } //�������Լ�: ��ü �� ��ü �� 
    void show() {
        cout << title << ' ' << price << "�� " <<pages << " ������" << endl;
    } // ����, ����, ������ ���
    string getTitle() {
        return title;
    } // get�Լ�: title
};

int main(){
    Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
    // price ��
    if(a == 30000) cout << "���� 30000��" << endl;
    // å title ��
    if(a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl;
    // title, price, pages ��� ��
    if(a == b) cout << "�� å�� ���� å�Դϴ�." << endl;
}