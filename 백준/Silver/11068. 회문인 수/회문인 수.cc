#include<iostream>
#include<vector>
#include<string>

using namespace std;

string toBaseN(int number, int base){
    string result="";
    string digit = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^";
    if(number == 0) return "0";

    while(number>0){
        result = digit[number%base] + result;
        number /= base;
    }

    return result;
}


int main(){
    int T, B, n, size, find=1;
    string sn;
    cin >> T;
    for(int k=0;k<T;++k){
        cin >> n;
        
        for(int j=2;j<65;++j){
            sn = toBaseN(n,j);
            size = sn.size();

            find = 1;

            for(int i=0;i<size/2;++i){ 
                if(sn[i] != sn[size-i-1]){
                    find = 0;
                    break;
                }

            }
            if(find){
                break;
            }   
            
        }
        cout << find << "\n";
    }
}