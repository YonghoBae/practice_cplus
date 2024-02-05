#include<iostream>
using namespace std;

int main(){
    int N;
    string A,B;
    cin >> N;
    N /= 4;
    A = "long ";
    B = "int";
    for(int i=0;i<N;i++){
        B = A+B;
    }
    cout << B << endl;
}