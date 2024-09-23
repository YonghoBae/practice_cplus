#include<iostream> // iostream헤더파일 포함
using namespace std; // std:: 생략

template<class T> // 제네릭 타입 T 선언
void reverseArray(T a[],int n) //함수 reverseArray선언(매개변수:타입T배열(주소참조),int n)
{
    int temp = 0; //int형 변수 temp 선언 및 초기화 
    for(int i=0;i<n/2;i++){
        temp = a[i]; 
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }// 배열 a의 역순서로 다시 나열
}

int main() {
    int x[] = {1, 10, 100, 5, 4}; //int형 배열 x 선언 및 값대입
    reverseArray(x, 5); // 배열x 역순서로 다시 나열
    for(int i=0; i<5; i++)
        cout << x[i] << ' '; // 4 5 100 10 1 이 출력된다.
    cout << endl; //버퍼비움, 개행
}