#include <iostream>

#include <string>

using namespace std;

 

class Account {

 string name;

 string id;

 int balance;

public:

 Account(string n, string i, int bal);

 void deposit(int money);

 int withdraw(int money);

 int inquiry();

 string getOwner() { return name; }

};

 

Account::Account(string n, string i, int bal) {

 name = n;

 id = i;

 balance = bal;

}

 

void Account::deposit(int money) {

 balance += money;

}

 

int Account::withdraw(int money) {

 if (money > balance) { 

  money = balance;

  balance = 0;

 }

 else

  balance -= money;

 

 return money; 

}

 

int Account::inquiry() {

 return balance;

}

 

int main() {

Account a("홍길동", “11-111”, 50000); 

a.deposit(500000);  

cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;

int money = a.withdraw(200000);

cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;

}