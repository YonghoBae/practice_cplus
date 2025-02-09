//1629번 곱셈
#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << ((int)pow(a,b));
}
//자연수 A를 B번 곱한 수 % C
//a^b % c
//a^b - a^b / c => a^b(1-1/c)
//a*a*a*a...(1-1/c)
// 10*10*10*10*10*10*... % 12
// 100%12 = 4
// 1000%12 = 4
// 4%3 = 1
// 16%3 = 1
// 10 11 12