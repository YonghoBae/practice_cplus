
/***************************************************************/
/*             HW#7 : �������� ��ü�� �������                               */
/*  �ۼ��� : ���ȣ                    ��¥ : 2023�� 5�� 7��  */
/*                                                                                     */
/* ���� ���� :
�������� Person�� �����, Family�� ������ �߻�ȭ�� Ŭ�����μ� �ϼ�
���� ���� Ŭ�����̴�.
class Person {
string name;
public:
Person() { name=""; }
Person(string name) { this->name = name; }
string getName() { return name; }
void setName(string name) { this->name = name; }
};
class Family {
string name;
Person* p; // Person �迭 ������
int size; // Person �迭�� ũ��. ���� ������ ��
public:
Family(string name, int size); // size ������ŭ Person �迭 ���� ����
void setName(int index, string name);
void show(); // ��� ���� ������ ���
~Family();
};

���� main()�� �۵��ǵ��� Person�� Family Ŭ������ �ʿ��� ������� �߰��ϰ�, �ڵ带 �ϼ��϶�.
int main() {
Family *simpson = new Family("Simpson", 3); // 3������ ������ Simpson ����
simpson��setName(0, "Mr. Simpson");
simpson��setName(1, "Mrs. Simpson");
simpson��setName(2, ��Bart Simpson��);
simpson��show();
delete simpson;
} 

������
Simpson ������ ������ ���� 3���Դϴ�.
Mr. Simpson Mrs. Simpson Bart Simpson                                                      */
/*                - - - - - - -                                                      */
/***************************************************************/

#include<iostream>
using namespace std;

class Person {
    string name; //name ����
public:
    Person() { name=""; } //����Ʈ ������ name �ʱ�ȭ
    Person(string name) { this->name = name; } //������ person�� name�� name ����
    string getName() { return name; } //get�Լ� name ����
    void setName(string name) { this->name = name; } //set�Լ� name����
};

class Family {
    string name; // name ����
    Person* p; // Person �迭 ������
    int size; // Person �迭�� ũ��. ���� ������ ��
public:
    Family(string name, int size); // size ������ŭ Person �迭 ���� ����
    void setName(int index, string name); //set�Լ�
    void show(); // ��� ���� ������ ���
    ~Family(); //�Ҹ���
};

Family::Family(string name, int size){
    this->size = size;
    this->p = new Person[size];
}//������, person size��ŭ ũ���� �迭 ���� �޸� �Ҵ� �� this->p�� �ּ� ����

Family::~Family(){
    delete[] p;
}//�Ҹ���, p�� ����Ű�� ���� �޸� ����

void Family::setName(int index, string name){
    this->p[index].setName(name);
}//set�Լ�, Person�� set�Լ��� �̿��ؼ� p�� �迭�� index�� name ����

void Family::show(){
    cout << "Simpson ������ ������ ���� "<< this->size <<"���Դϴ�." << endl;//������ ���
    for(int i=0;i<this->size;i++){
        cout << p[i].getName() << "  ";
    }//�����̸� ���
    cout << endl;
}

int main(){
    Family *simpson = new Family("Simpson", 3); // 3������ ������ Simpson ���� �����޸� �Ҵ�
    simpson->setName(0, "Mr. Simpson");
    simpson->setName(1, "Mrs. Simpson");
    simpson->setName(2, "Bart Simpson"); //�迭 �� index�� �̸� ����
    simpson->show(); //��� �����̸� ���
    delete simpson; // �޸��Ҵ� ����
}