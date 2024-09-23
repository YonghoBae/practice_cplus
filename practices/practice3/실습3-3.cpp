#include <iostream> // iostream헤더파일 포함
using namespace std; // std:: 생략

template <class T> // 제네릭 타입 T 선언
T add(T a[], int n) // 타입 T 함수 add 선언(매개변수:타입T배열(주소참조),int n)
{
    T total = 0; // 타입 T total선언 및 초기화
    for(int i=0;i<n;i++){
        total += a[i]; // 배열 a에 들어있는 값의 총합 total에 대입
    }
    return total; //total 리턴
}

int main() {
    int x[] = {1,2,3,4,5}; //int형 배열 x 선언 및 값대입
    double d[] = {1.2, 2.3, 3.4, 4.5, 5.6, 6.7}; // doulbe형 배열 d 선언 및 값대입
    cout << "sum of x[] = " << add(x,5) << endl; // 배열 x와 원소 5개의 합을 계산
    cout << "sum of d[] = " << add(d,6) << endl; // 배열 d와 원소 6개의 합을 계산
}