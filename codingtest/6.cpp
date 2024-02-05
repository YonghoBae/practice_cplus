#include<iostream>
using namespace std;

void SumDiff(int a, int b, int& sum, int& diff){
    sum = a+b;
    diff = a-b;
}

int main(){
    int a, b, sum, diff;
    cin >> a;
    cin >> b;
    SumDiff(a,b,sum, diff);
    cout << sum << " " << diff << endl;
}