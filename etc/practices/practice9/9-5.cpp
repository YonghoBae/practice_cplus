/***************************************************************/
/*             HW#8 : friend�� ������ �ߺ�                                 */
/*  �ۼ��� : ���ȣ                    ��¥ : 2023�� 5�� 24��  */
/*                                                                                     */
/* ���� ���� : ���� ������ ���� ��¥ å������ �Ǻ��ϴ� !�����ڸ� �ۼ��϶� 
Book book("�������", 0, 50); // ������ 0
if(!book) cout << "��¥��" << endl;

����ȭ��
��¥��                                                   */
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
    }//�������Լ�: ����, ����, ������ ��
    bool operator!(){
        if(this->price == 0){
            return true;
        }
        return false;
    }//�������Լ�: ������ 0���� �ƴ���
    void show() {
        cout << title << ' ' << price << "�� " <<pages << " ������" << endl;
    }//����, ����, ������ ���
    string getTitle() {
        return title;
    }//get�Լ�: ���� ����
};

int main(){
    Book book("�������", 0, 50); // ������ 0
    if(!book) cout << "��¥��" << endl;
}