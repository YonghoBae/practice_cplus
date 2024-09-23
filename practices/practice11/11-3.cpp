/***************************************************************/
/*             HW#10 : �����Լ��� �߻�Ŭ����                                */
/*  �ۼ��� : ���ȣ                    ��¥ : 2023�� 6�� 4��  */
/*                                                                                     */
/* ���� ���� : ? ���� �ڵ�� ���� ����� �����Ͽ� �߻� Ŭ���� Calculator�� ��ӹ޴�
Adder�� Subractor Ŭ������ �����϶�
#include <iostream>
using namespace std;
class Calculator {
void input() {
cout << "���� 2 ���� �Է��ϼ���>> ";
cin >> a >> b;
}
protected:
int a, b;
virtual int calc(int a, int b) = 0; // �� ������ �� ����
public:
void run() {
input();
cout << "���� ���� " << calc(a, b) << endl;
}
};
int main() {
Adder adder;
Subtractor subtractor;
adder.run();
subtractor.run();
}
����ȭ��
���� 2 ���� �Է��ϼ���>> 5 3
���� ���� 8
���� 2 ���� �Է��ϼ���>> 5 3
���� ���� 2
                         */
/*                - - - - - - -                                                      */
/***************************************************************/
#include <iostream>
using namespace std;

class Calculator {
    /*a,b �Է¹޴� ����Լ�*/
    void input() {
        cout << "���� 2 ���� �Է��ϼ���>> ";
        cin >> a >> b;
    }
protected:
    int a, b;
    virtual int calc(int a, int b) = 0; // �� ������ �� ����
public:
    /*�Է°� ���� �� ����ϴ� ����Լ�*/
    void run() {
        input();
        cout << "���� ���� " << calc(a, b) << endl;
    }
};

/*Calculator ��ӹ��� Adder*/
class Adder: public Calculator{
public:
    /*�����Լ�, a+b���� ����Լ�*/
    virtual int calc(int a, int b){
        return a+b;
    }
};

class Subractor: public Calculator{
public:
    /*�����Լ�, a-b���� ����Լ�*/
    virtual int calc(int a, int b){
        return a-b;
    }
};

int main() {
    Adder adder;
    Subractor subractor;
    adder.run();
    subractor.run();
}
