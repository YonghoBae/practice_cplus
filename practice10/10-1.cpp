/***************************************************************/
/*             HW#7 : ���                                 */
/*  �ۼ��� : ���ȣ                    ��¥ : 2023�� 5�� 21��  */
/*                                                                                     */
/* ���� ���� :���� �ڵ尡 ����ǵ��� Circle�� ��ӹ��� NamedCircle Ŭ������ �ۼ���
�� ��ü ���α׷��� �ϼ��϶�.   
int main() {
NamedCircle waffle(3, "waffle"); // �������� 3�̰� �̸��� waffle�� ��
waffle.show();
}

����ȭ��
�������� 3�� waffle                                                     */
/*                - - - - - - -                                                      */
/***************************************************************/
#include<iostream>
#include<string>
using namespace std;

class Circle{
public:
    int radius;
}; //Ŭ���� Circle

class NamedCircle:public Circle{
public:
    NamedCircle(); //�⺻������
    NamedCircle(int r, string name); //������, �̸� �ʱ�ȭ ������
    int show(); //������, �̸� ���
    string circle_name; //���̸�
}; // Circle ��ӹ��� NamedCircle 

NamedCircle::NamedCircle(){
}

NamedCircle::NamedCircle(int r, string name){
    this->radius = r;
    this->circle_name = name;
}

int NamedCircle::show(){
    cout << "�������� " << this->radius << "�� " << this->circle_name << endl;
    return 0;
}

int main() {
    NamedCircle waffle(3, "waffle"); // �������� 3�̰� �̸��� waffle�� ��
    waffle.show(); // waffle ���
}
