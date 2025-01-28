//14501번 퇴사
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, sum=0;
    cin >> n;
    vector<pair<int,int>> tp(n);
    for(int i=0;i<n;++i){
        cin >> tp[i].first >> tp[i].second;
    }

    int temp;
    for(int i=0;i<n;++i){
        temp = 0;
        if(i+tp[i].first > n){
            continue;
        }else{
            for(int j=1;j<tp[i].first;++j){
                temp += tp[i+j].second;
            }
            if(tp[i].second>temp){
                sum += tp[i].first;
                i += tp[i].first;
            }
        }
    }

    cout << sum;
}
//N일 동안 많은 상담
//1.날짜 넘는건 제외
//2.T>1 이면 1일당 얼마버는지로 환산 후 비교 후 큰 값을 넣고 계산