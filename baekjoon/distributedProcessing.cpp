//1009번 분산처리
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int t,a,b;
    int d,cnt;
    cin >> t;
    for(int T=0;T<t;++T){
        cin >> a >> b;
        d=1;
        cnt=0;
        for(int i=0;i<b;++i){
            d = (d*a)%10;
        }

        if(d%10 == 0){
            cout << 10 << "\n";
        }else{
            cout << d%10 << "\n";
        }

    }
} 

//컴퓨터 10대
//a^b개 데이터
//마지막 데이터가 처리될 컴퓨터 번호는?