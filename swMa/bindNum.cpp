//1744번 수 묶기
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n, sum=0;
    cin >> n;
    vector<int> plus;    // 양수 저장
    vector<int> minus;   // 음수 저장
    bool hasZero = false;

    for(int i=0;i<n;++i){
        int num;
        cin >> num;
        if(num > 1) plus.push_back(num);
        else if(num == 1) sum += 1;  // 1은 곱하는 것보다 더하는 게 이득
        else if(num == 0) hasZero = true;
        else minus.push_back(num);
    }

    // 양수는 내림차순 정렬
    sort(plus.begin(), plus.end(), greater<int>());
    // 음수는 오름차순 정렬
    sort(minus.begin(), minus.end());

    // 양수 처리
    for(int i=0; i<plus.size()-1; i+=2){
        sum += plus[i] * plus[i+1];
    }
    if(plus.size() % 2 == 1) sum += plus.back();

    // 음수 처리
    for(int i=0; i<minus.size()-1; i+=2){
        sum += minus[i] * minus[i+1];
    }
    // 남은 음수가 있고 0이 없으면 더함
    if(minus.size() % 2 == 1 && !hasZero){
        sum += minus.back();
    }

    cout << sum;
}
// 수열 길이 N
// 수열의 합의 최대값
// 위치 상관없이 2개의 수 곱 가능
// 