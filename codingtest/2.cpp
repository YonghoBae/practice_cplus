#include<iostream>
using namespace std;

class Person{
    string name;
    public:
    int age;
    void setName(string a){
        name = a;
    }
    void setAge(int a){
        age = a;
    }
    string getName(){
        return name;
    }
};


int main(){
    Person person;
    person.setName("John");
    person.setAge(25);
    cout << person.getName() << endl;
    cout << person.age << endl;
    return 0;
}