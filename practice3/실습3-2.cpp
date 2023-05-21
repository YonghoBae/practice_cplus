#include<iostream> // iostream헤더파일 포함
using namespace std; // std:: 생략

int big(int a,int b); // 함수 big 선언(int형 매개변수 a,b)
int big(int a,int b,int c); // 함수 big선언(int형 매개변수 a,b,c)(4행 big함수와는 다른 함수)

int big(int a,int b){
    if(a>100 || b>100)
        return 100;//(a or b) > 100이면 100리턴
    if(a>b)
        return a;//a>b면 a 리턴
    else
        return b;//그외의 경우는 b 리턴
}

int big(int a,int b,int c){
    if(a>50 || b>50 || c>50)
        return 50; //a,b,c중 하나가 50보다 크면 50리턴
    if(a>b || a>c) 
        return a; //a가 가장 크면 a리턴
    else if(b>a || b>c)
        return b; //b가 가장 크면 b리턴
    else
        return c; //c가 가장 크면 c리턴
}

int main(){
    int x = big(3, 5); // 3<5이므로 x에 5대입
    int y = big(300, 60); // 300>100이므로 y에 100대입
    int z = big(30, 60, 50); // c>50이므로 z에 50대입
    cout << x << ' ' << y << ' ' << z << endl; //위와같은 x y z의 값 출력
}
