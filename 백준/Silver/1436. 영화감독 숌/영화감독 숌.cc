#include<iostream>
#include<string>
using namespace std;

int main(){
    int N,n=0, n_check=665, size;
    string check = "666", ns;
    cin >> N;
    while(n!=N){
        n_check++;
        ns = to_string(n_check);
        if(ns.find("666") != string::npos){
            n++;
        }
        
    }
    cout << n_check;
}