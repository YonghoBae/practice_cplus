/***************************************************************/
/*             HW#10 : �����Լ��� �߻�Ŭ����                                */
/*  �ۼ��� : ���ȣ                    ��¥ : 2023�� 6�� 4��  */
/*                                                                                     */
/* ���� ���� : Shape Ŭ������ ��ӹ޾� Ÿ���� ǥ���ϴ� Oval, �簢���� ǥ���ϴ�
Rect, �ﰢ���� ǥ���ϴ� Trianglar Ŭ������ �ۼ��϶�. main()�� �ۼ��ϰ�
�����ϸ� ������ ����.
int main() {
Shape *p[3];
p[0] = new Oval("��붱", 10, 20);
p[1] = new Rect("����", 30, 40);
p[2] = new Triangular("�佺Ʈ", 30, 40);
for(int i=0; i<3; i++)
cout << p[i]��getName() << " ���̴� " << p[i]��getArea() << endl;
for(int i=0; i<3; i++) delete p[i];
}
����ȭ��
��붱 ���̴� 628
���� ���̴� 1200
�佺Ʈ ���̴� 600                           */
/*                - - - - - - -                                                      */
/***************************************************************/
#include<iostream>
#include<string>
using namespace std;

/*class Shape*/
class Shape{
protected:
    string name;
public:
    string getName(){
        return name;
    }
    virtual float getArea()=0;
};


/*Shape ��ӹ��� class Oval*/
class Oval: public Shape{
protected:
    int semi_major_axis, semi_minor_axis;
public:
    /*�̸�, ����, ���� �ʱ�ȭ ������*/
    Oval(string name,int semi_major_axis,int semi_minor_axis){
        this->name=name;
        this->semi_major_axis=semi_major_axis;
        this->semi_minor_axis=semi_minor_axis;
    }
    /*�̸� get�Լ�*/
    string getName(){
        return name;
    }
    /*�����Լ� ���� get�Լ�*/
    float getArea(){
        return semi_major_axis*semi_minor_axis*3.14;
    }
};

/*Shape ��ӹ��� class Rect*/
class Rect: public Shape{
protected:
    int height ,width;
public:
    /*�̸�, ����, �غ� �ʱ�ȭ ������*/
    Rect(string name,int height,int width){
        this->name=name;
        this->height=height;
        this->width=width;
    }
    /*�̸� get�Լ�*/
    string getName(){
        return name;
    }
    /*�����Լ� ���� get�Լ�*/
    float getArea(){
        return height*width;
    }
};

/*Shape ��ӹ��� class Triangular*/
class Triangular: public Shape{
protected:
    int height ,width;
public:
    /*�̸�, ����, �غ� �ʱ�ȭ ������*/
    Triangular(string name,int height,int width){
        this->name=name;
        this->height=height;
        this->width=width;
    }
    /*�̸� get�Լ�*/
    string getName(){
        return name;
    }
    /*�����Լ� ���� get�Լ�*/
    float getArea() {
        return height*width/2;
    }
};

int main() {
    Shape *p[3]; //class Shape ��ü������ �迭 ����
    /*class�� ��ȯ*/
    p[0] = new Oval("��붱", 10, 20);
    p[1] = new Rect("����", 30, 40);
    p[2] = new Triangular("�佺Ʈ", 30, 40);
    /*��ü�迭�� �� �̸�, ���� ���*/
    for(int i=0; i<3; i++)
        cout << p[i]->getName() << " ���̴� " << p[i]->getArea() << endl;
    for(int i=0; i<3; i++) delete p[i]; //�����޸��Ҵ� ����
}