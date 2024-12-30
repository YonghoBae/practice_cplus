#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> p(n);
    for(int i=0;i<n;++i){
        cin >> p[i];
    }

    sort(p.begin(),p.end());

    int sum=0, result=0;
    for(int i=0;i<n;++i){
        sum += p[i];
        result += sum;
    }

    cout << result;
}

// ATM 1대
// N명 대기
// i번 사람 인출 시간 pi
// 인출 시간이 적은 순으로 뽑는게 모든 사람이 기다리는 시간은 줄듯
// pi+1 = pi