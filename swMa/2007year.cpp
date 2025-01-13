#include<iostream>
using namespace std;

int m[] = {0,1,2,3,4,5,6,7,8,9,10,11,12};
int n[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int main(){
    int a,b,r=0;
    cin >> a >> b;
    for(int i=0;i<a;++i){
        r += n[i];
    }
    r += b;

    while(r>7){
        r-=7;
    }

    if(r==1){
        cout << "MON";
    }else if(r==2){
        cout << "TUE";
    }else if(r==3){
        cout << "WED";
    }else if(r==4){
        cout << "THU";
    }else if(r==5){
        cout << "FRI";
    }else if(r==6){
        cout << "SAT";
    }else if(r==7){
        cout << "SUN";
    }
}

