#include<iostream>
#include<vector>
 using namespace std;

 int main(){
    int t, m=0, s=0, a=0,b=0,c=0;
    cin >> t;

    m = t/60;
    s = t-m*60;

    a += m/5;
    m -= a*5;
    b += m;

    c = s/10;
    if(s%10 != 0){
        cout << -1;
        return 0;
    }

    cout << a << " " << b << " " << c;
 }

 //시간조절 A 5분 B 1분 C 10초
 //시간의 합 == T롷 만들어야함
 //최소조작
 //순서대로 가능한 횟수 누르면 될듯
 