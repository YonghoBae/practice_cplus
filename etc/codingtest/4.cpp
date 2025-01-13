#include<iostream>
using namespace std;

class Person {
    private:
    string name;
    int age;
    public:
    Person() {
        name = "None";
        age = 0;
        cout << name << " " << age << endl;
        }
    ~Person(){
        cout << this->getName() << " " << this->getAge() << endl;   
    } 
        string getName() {return name;} 
        int getAge() {return age;}
        void setPerson(string n, int a) {name = n;age = a;}
};

int main() {
    Person* personPtr = new Person;
    personPtr->setPerson("John", 25);
    cout << personPtr->getName() << " " << personPtr->getAge() << endl;// 동적 객체 소멸 
    delete personPtr;
    return 0;
}
