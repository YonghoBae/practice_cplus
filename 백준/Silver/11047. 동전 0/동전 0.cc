#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,k;
    cin >> n >> k;

    vector<int> a(n);
    for(int i=0;i<n;++i){
        cin >> a[i];
    }

    int cnt=0;
    for(int i=n-1;i>-1;--i){
        if(k==0) break;
        if(k>=a[i]){
            cnt+=k/a[i];
            k -= k/a[i] * a[i];
        }
    }

    cout << cnt;
}


//동전 종류 N
//동전 조합 -> 가치의 합 K의 최솟값

//a[i] = 랜덤값 * a[i-1]이란 말이지
//k = 