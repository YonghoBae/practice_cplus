#include<iostream>
using namespace std;

int main(){
    int a,b,c,money=0;
    cin >> a >> b >> c;
    if(a==b && b==c){
        money = 10000+a*1000;
    }
    else if(a==b||a==c){
        money = 1000+a*100;
    }
    else if(b==c){
        money = 1000+c*100;
    }
    else{
        if(a>b&&a>c){
            money = a*100;
        }
        else if(b>c){
            money = b*100;
        }
        else{
            money = c*100;
        }
    }
    cout << money << endl;
    return 0;
}