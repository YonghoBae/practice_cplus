#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n),b(n);

    for(int i=0;i<n;++i){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;++i){
        cin >> b[i];
    }
    sort(b.rbegin(),b.rend());

    int sum=0;
    for(int i=0;i<n;++i){
        sum += a[i]*b[i];
    }

    cout << sum;
}

//B의 가장큰 수는 A의 작은 수랑 맞춰서 곱하면될듯
//B는 재배열 안된다고하지만 어차피 A재배열하면 상관없지않나?