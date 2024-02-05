//int형 범위 넘어가서 틀림... 오버플로우 체크 필수
#include<iostream>
using namespace std;

int main(){
    long long A,B,C;
    cin >> A >> B >> C;
    cout << A+B+C;
    return 0;
}