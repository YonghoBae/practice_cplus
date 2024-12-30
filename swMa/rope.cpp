#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> r(n);
    for(int i=0;i<n;++i){
        cin >> r[i];
    }

    sort(r.begin(),r.end());

    int max=0;
    for(int i=0;i<n;++i){
        if(max < r[i] * (n-i)) max = r[i] * (n-i);
    }

    cout << max;
}

//n개의 로프
//각 로프는 들수있는 중량이 다름
//로프 병렬 연결 시 각 로프에 무게가 고르게 분산
//로프들로 들 수 있는 최대 중량

//모든 경우의 수
//모든 로프에서 가장 약한 로프를 빼가면서 듨수있는 무게 체크
//들수있는 무게는 가장 약한 로프 * 로프 개수