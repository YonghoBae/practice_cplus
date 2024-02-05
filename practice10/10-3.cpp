/***************************************************************/
/*             HW#7 : 상속                                 */
/*  작성자 : 배용호                    날짜 : 2023년 5월 21일  */
/*                                                                                     */
/* 문제 정의 :다음과 같은 BaseArray 클래스를 상속받아 큐처럼 작동하는 MyQueue 클
래스를 작성하라.
class BaseArray {
private:
int capacity; // 동적 할당된 메모리 용량
int *mem; // 정수 배열을 만들기 위한 메모리 포인터
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
cout << "큐에 삽입할 5개의 정수를 입력하라>> ";
for(int i=0; i<5; i++) {
cin >> n;
mQ.enqueue(n); // 큐에 삽입
}
cout << "큐의 용량 : " << mQ.capacity() << ", 큐의 크기 : " << mQ.length() << endl;
cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
while(mQ.length() != 0) {
cout << mQ.dequeue() << ' '; // 큐에서 제거하여 출력
}
cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;
}

실행화면
큐에 삽입할 4개의 정수를 입력하라>> 1 3 5 7 9
큐의 용량 : 100, 큐의 크기 : 5
큐의 원소를 순서대로 제거하여 출력한다>>1 3 5 7 9
큐의 현재 크기 : 0.                                                 */
/*                - - - - - - -                                                      */
/***************************************************************/
#include<iostream>
using namespace std;

class BaseArray {
private:
    int capacity; // 동적 할당된 메모리 용량
    int *mem; // 정수 배열을 만들기 위한 메모리 포인터
protected:
    BaseArray(int capacity=100) {
        this->capacity = capacity; 
        mem = new int[capacity];
    }//동적메모리할당
    ~BaseArray() { delete[] mem; }// 소멸자, 메모리할당 해제
    void put(int index, int val) { mem[index] = val; } //index에 val 대입
    int get(int index) { return mem[index]; } //index의 mem get
    int getCapacity() { return capacity; } // capacity 리턴
};

class MyQueue:public BaseArray{
    int first;  // 첫 번째 원소의 위치
    int last;   // 마지막 원소의 위치
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
    } //queue 메모리용량 리턴
    int length(){
        return last - first;
    } //queue 현재 크기 리턴
};

int main() {
    MyQueue mQ(100);
    int n;
    cout << "큐에 삽입할 5개의 정수를 입력하라>> ";
    for(int i=0; i<5; i++) {
        cin >> n;
        mQ.enqueue(n); // 큐에 삽입
    }
    cout << "큐의 용량 : " << mQ.capacity() << ", 큐의 크기 : " << mQ.length() << endl;
    cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
    while(mQ.length() != 0) {
        cout << mQ.dequeue() << ' '; // 큐에서 제거하여 출력
    }
    cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;
    return 0;
}
