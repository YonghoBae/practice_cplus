//1931번 회의실 배정
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(pair<int,int> a, pair<int,int> b){
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main(){
    int n, cnt=1;
    cin >> n;
    vector<pair<int,int>> mr(n);
    for(int i=0;i<n;++i){
        cin >> mr[i].first >> mr[i].second;
    }
    sort(mr.begin(),mr.end(),compare);
    
    int end = mr[0].second;
    for(int i=1;i<n;++i){
        if(mr[i].first >= end){
            cnt++;
            end = mr[i].second;
        }
    }
    
    cout << cnt;
}

//회의실 1개, 회의 N개, 각 회의 시작 시간, 끝나는 시간
// 회의할 수 있는 최대 개수
// 시작 시간 == 끝나는 시간 => 시작하자마자 종료
