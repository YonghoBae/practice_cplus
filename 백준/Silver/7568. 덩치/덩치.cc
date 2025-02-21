//7568번 덩치
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> b(n);
    vector<int> r(n,1);

    for(int i=0;i<n;++i){
        cin >> b[i].first >> b[i].second;
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(i==j) continue;

            if(b[i].first<b[j].first && b[i].second<b[j].second){
                r[i]++;
            }
        }
    }

    for(auto i:r){
        cout << i << " " ;
    }
}
//덩치를 키와 몸무게로 표현 -> 등수
//키도 크고 몸무게도 크면 덩치가 크다
//그 외에는 측정불가
//자신보다 큰 덩치의 사람의 수 = k
// 등수 = k+17568