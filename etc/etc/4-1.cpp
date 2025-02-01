#include <iostream>
using namespace std;
// 원형 선언
void f(char c=' ', int line=1);
// 함수 구현
void f(char c, int line){
    for(int j=0;j<line;++j){
        for(int i=0;i<10;++i){
            cout << c;
        }
        cout <<"\n";  
    }

}

int main() {
    f(); // 한줄에 빈칸을 10개 출력한다.
    f('%'); // 한 줄에 '%'를 10개 출력한다.
    f('@', 5); // 5 줄에 '@' 문자를 10개 출력한다.
}