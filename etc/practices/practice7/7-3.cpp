
/***************************************************************/
/*             HW#7 : 여러가지 객체의 생성방법                               */
/*  작성자 : 배용호                    날짜 : 2023년 5월 7일  */
/*                                                                                     */
/* 문제 정의 :
다음에서 Person은 사람을, Family는 가족을 추상화한 클래스로서 완성
되지 않은 클래스이다.
class Person {
string name;
public:
Person() { name=""; }
Person(string name) { this->name = name; }
string getName() { return name; }
void setName(string name) { this->name = name; }
};
class Family {
string name;
Person* p; // Person 배열 포인터
int size; // Person 배열의 크기. 가족 구성원 수
public:
Family(string name, int size); // size 개수만큼 Person 배열 동적 생성
void setName(int index, string name);
void show(); // 모든 가족 구성원 출력
~Family();
};

다음 main()이 작동되도록 Person과 Family 클래스에 필요한 멤버들을 추가하고, 코드를 완성하라.
int main() {
Family *simpson = new Family("Simpson", 3); // 3명으로 구성된 Simpson 가족
simpson→setName(0, "Mr. Simpson");
simpson→setName(1, "Mrs. Simpson");
simpson→setName(2, “Bart Simpson”);
simpson→show();
delete simpson;
} 

실행결과
Simpson 가족은 다음과 같이 3명입니다.
Mr. Simpson Mrs. Simpson Bart Simpson                                                      */
/*                - - - - - - -                                                      */
/***************************************************************/

#include<iostream>
using namespace std;

class Person {
    string name; //name 변수
public:
    Person() { name=""; } //디폴트 생성자 name 초기화
    Person(string name) { this->name = name; } //생성자 person의 name에 name 대입
    string getName() { return name; } //get함수 name 리턴
    void setName(string name) { this->name = name; } //set함수 name설정
};

class Family {
    string name; // name 변수
    Person* p; // Person 배열 포인터
    int size; // Person 배열의 크기. 가족 구성원 수
public:
    Family(string name, int size); // size 개수만큼 Person 배열 동적 생성
    void setName(int index, string name); //set함수
    void show(); // 모든 가족 구성원 출력
    ~Family(); //소멸자
};

Family::Family(string name, int size){
    this->size = size;
    this->p = new Person[size];
}//생성자, person size만큼 크기의 배열 동적 메모리 할당 후 this->p에 주소 저장

Family::~Family(){
    delete[] p;
}//소멸자, p가 가리키는 동적 메모리 해제

void Family::setName(int index, string name){
    this->p[index].setName(name);
}//set함수, Person의 set함수를 이용해서 p의 배열의 index에 name 저장

void Family::show(){
    cout << "Simpson 가족은 다음과 같이 "<< this->size <<"명입니다." << endl;//가족수 출력
    for(int i=0;i<this->size;i++){
        cout << p[i].getName() << "  ";
    }//가족이름 출력
    cout << endl;
}

int main(){
    Family *simpson = new Family("Simpson", 3); // 3명으로 구성된 Simpson 가족 동적메모리 할당
    simpson->setName(0, "Mr. Simpson");
    simpson->setName(1, "Mrs. Simpson");
    simpson->setName(2, "Bart Simpson"); //배열 각 index에 이름 저장
    simpson->show(); //모든 가족이름 출력
    delete simpson; // 메모리할당 해제
}