/***************************************************************/
/*             HW#7 : ���                                 */
/*  �ۼ��� : ���ȣ                    ��¥ : 2023�� 5�� 21��  */
/*                                                                                     */
/* ���� ���� :������ ���� �迭�� �����Ͽ� ���� �������� �������� Circle�� ��ӹ�
�� NamedCircle Ŭ������ main() �Լ� �� �ʿ��� �Լ��� �ۼ��϶�.
NamedCircle pizza[5];

����ȭ��
5���� ���� �������� ���� �̸��� �Է��ϼ���.
1 >> 5 ũ������
2 >> 8 ġ������
3 >> 25 �������
4 >> 30 ��Ȧ����
5 >> 15 ��������
���� ������ ū ���ڴ� ��Ȧ�����Դϴ�.                                                   */
/*                - - - - - - -                                                      */
/***************************************************************/
#include<iostream>
#include<string>
using namespace std;


class Circle{
protected:
    int radius;
};//Ŭ���� Circle

class NamedCircle:public Circle{
public:
    void Set(int r, string name){
        this->radius = r;
        this->circle_name = name;
    } //������, �̸� set�Լ�
    int getradius(){
        return this->radius;
    } //������ get �Լ�
    string getname(){
        return this->circle_name;
    } //�̸� get �Լ�
protected:
    string circle_name;
};//Circle ��ӹ��� NamedCircle 

string maxCircle(NamedCircle circle[5]){
    NamedCircle max = circle[0];
    for(int i=1;i<5;i++){
        if(max.getradius() < circle[i].getradius()){
            max = circle[i];
        }
    }
    return max.getname();
} //���� ������ ū ���� ����ϴ� maxCircle �Լ�



int main(){
    NamedCircle pizza[5]; //��ü�迭 ����
    int r; 
    string name; //�Է¹��� r, name ����
    cout << "5���� ���� �������� ���� �̸��� �Է��ϼ���." << endl;
    for(int i=0;i<5;i++){
        cout << i+1 << " >> ";
        cin >> r;
        getline(cin,name);
        pizza[i].Set(r,name);
    } //��ü�迭 ������, �̸� ����
    cout << "���� ������ ū ���ڴ�" << maxCircle(pizza) << "�Դϴ�." << endl; //������ ū ���� ���
}