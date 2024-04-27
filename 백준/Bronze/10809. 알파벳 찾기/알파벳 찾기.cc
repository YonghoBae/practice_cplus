#include<iostream>
#include<string>
using namespace std;

int main(){
    int size;
    string S;
    cin >> S;
    size = S.length();
    for(int i=97;i<123;i++){
        for(int j=0;j<size;++j){
            if(S[j] == i){
                cout << j << " ";
                break;
            }
            else if(j==size-1){
                cout << "-1 "; 
            }
        }
    }
}