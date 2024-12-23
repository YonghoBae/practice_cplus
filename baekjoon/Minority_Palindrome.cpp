//1747

#include<iostream>
#include<string>
using namespace std;

int main(){
    int N,size;
    string n;
    cin >> N;
    while(1){
        n = N;
        size = n.size();
        for(int i=0;i<(size/2+1);++i){
            if(n[i]!=n[size-i-1]){
                break;
            }else if(n[i]==n[size-i-1] && size/2 == i){
                cout << n;
            }
        }
    }
}