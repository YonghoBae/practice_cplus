#include<iostream>
using namespace std;

#include "Ram.h"

Ram::Ram(){
    *mem = 0;
    size = 100*1024;
}

Ram::~Ram(){
    cout << "�޸� ���ŵ�" << endl;
}

char Ram::read(int address){
    return (mem[address]);
}

void Ram::write(int address, char value){
    if(address<100*1024)
        mem[address] = value;
    else
        cout << "error" << endl;
}
