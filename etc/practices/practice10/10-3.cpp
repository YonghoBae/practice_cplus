/***************************************************************/
/*             HW#7 : ���                                 */
/*  �ۼ��� : ���ȣ                    ��¥ : 2023�� 5�� 21��  */
/*                                                                                     */
/* ���� ���� :������ ���� BaseArray Ŭ������ ��ӹ޾� ťó�� �۵��ϴ� MyQueue Ŭ
������ �ۼ��϶�.
class BaseArray {
private:
int capacity; // ���� �Ҵ�� �޸� �뷮
int *mem; // ���� �迭�� ����� ���� �޸� ������
protected:
BaseArray(int capacity=100) {
this->capacity = capacity; mem = new int [capacity];
}
~BaseArray() { delete [] mem; }
void put(int index, int val) { mem[index] = val; }
int get(int index) { return mem[index]; }
int getCapacity() { return capacity; }
};
int main() {
MyQueue mQ(100);
int n;
cout << "ť�� ������ 5���� ������ �Է��϶�>> ";
for(int i=0; i<5; i++) {
cin >> n;
mQ.enqueue(n); // ť�� ����
}
cout << "ť�� �뷮 : " << mQ.capacity() << ", ť�� ũ�� : " << mQ.length() << endl;
cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
while(mQ.length() != 0) {
cout << mQ.dequeue() << ' '; // ť���� �����Ͽ� ���
}
cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;
}

����ȭ��
ť�� ������ 4���� ������ �Է��϶�>> 1 3 5 7 9
ť�� �뷮 : 100, ť�� ũ�� : 5
ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>>1 3 5 7 9
ť�� ���� ũ�� : 0.                                                 */
/*                - - - - - - -                                                      */
/***************************************************************/
#include<iostream>
using namespace std;

class BaseArray {
private:
    int capacity; // ���� �Ҵ�� �޸� �뷮
    int *mem; // ���� �迭�� ����� ���� �޸� ������
protected:
    BaseArray(int capacity=100) {
        this->capacity = capacity; 
        mem = new int[capacity];
    }//�����޸��Ҵ�
    ~BaseArray() { delete[] mem; }// �Ҹ���, �޸��Ҵ� ����
    void put(int index, int val) { mem[index] = val; } //index�� val ����
    int get(int index) { return mem[index]; } //index�� mem get
    int getCapacity() { return capacity; } // capacity ����
};

class MyQueue:public BaseArray{
    int first;  // ù ��° ������ ��ġ
    int last;   // ������ ������ ��ġ
public:
    MyQueue(int capacity):BaseArray(capacity){
        first = last = 0;
    }
    void enqueue(int n){
        put(last++, n);
    } //enqueue
    int dequeue(){
        return get(first++);
    } //dequeue
    int capacity(){
        return getCapacity();
    } //queue �޸𸮿뷮 ����
    int length(){
        return last - first;
    } //queue ���� ũ�� ����
};

int main() {
    MyQueue mQ(100);
    int n;
    cout << "ť�� ������ 5���� ������ �Է��϶�>> ";
    for(int i=0; i<5; i++) {
        cin >> n;
        mQ.enqueue(n); // ť�� ����
    }
    cout << "ť�� �뷮 : " << mQ.capacity() << ", ť�� ũ�� : " << mQ.length() << endl;
    cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
    while(mQ.length() != 0) {
        cout << mQ.dequeue() << ' '; // ť���� �����Ͽ� ���
    }
    cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;
    return 0;
}
