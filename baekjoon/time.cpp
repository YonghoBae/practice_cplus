//18312번 시각
//구현에 너무 겁먹고 어렵게 생각한듯
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,k, cnt=0;
    cin >> n >> k;

    for(int i=0;i<=n;++i){
        for(int j=0;j<=59;++j){
            for(int x=0;x<=59;++x){
                if(i/10 == k || i%10 == k ||j/10 == k || j%10 == k || x/10 == k || x%10 == k ){
                    cnt++;
                }
            }
        }
    }

    cout << cnt;
}

//시 00~24
//분 00~59
//초 00~59
//