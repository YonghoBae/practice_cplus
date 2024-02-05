#include<iostream>
using namespace std;

template <class T>
T max(T a[], int b){
    T m = a[0];
    for(int i=1;i<b;i++){
        if(a[i]>m){
            m=a[i];
        }
    }
    return m;
}

int main(){
    int x[] = {3, 4, 1, 5, 2};
    char c[] = {'e','a','c','d','b','f'};

    cout << max(x,5) << " " << max(c,6);
}