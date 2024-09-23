#include<iostream>
#include<string>
using namespace std;

int main(){
    int arr[2][3] = { {11, 12, 13}, {21, 22, 23} };
    int (*parr)[3]; // 배열포인터
    int *p; int **pt;
    parr = arr;
    cout << parr << " " << arr << endl; // 주소 ptr == M
    cout << parr+1 << " " << arr+1 << endl; // 주소 3 X 4byte 만큼 늘어남 parr+1 == arr+1
    cout << *(parr+1) << " " << parr[1] << " " << *(arr+1) << " " << arr[1] << endl; // 주소
    cout << **(parr+1) << " " << parr[1][0] << " " << **(arr+1) << " " << *arr[1] << " " << arr[1][0] << " " <<endl; // 원소 값 : 21
    p = arr[0];
    cout << p << " " << arr[0] << " " << *arr << endl; // p == arr[0] == *arr 각 원소의 시작주소
    cout << *(p+1) << " " << *(arr[0]+1) << " " << *(*arr+1) << endl; // 원소 값 : 12
    pt = &p; // pt = arr; (X)
    cout << *pt << " " << p << endl; // *pt == p
    cout << **pt << " " << *p << endl; // **pt == *p
}