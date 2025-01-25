//11399번 ATM
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n, result=0;
    cin >> n;
    vector<int> p(n);
    for(int i=0;i<n;++i){
        cin >> p[i];
    }
    sort(p.begin(),p.end());
    for(int i=1;i<=n;++i){
        for(int j=0;j<i;++j){
            result += p[j];
        }
    }

    cout << result;
}

//ATM 1대, 사람 N명(1~N까지 번호)
//Pi == i번 사람이 돈을 인출하는데 걸리는 시간
//각 사람이 돈을 인출하는데 걸리는 시간의 합의 최솟값
//1,2,3,3,4  1,3,6,9,13 
//그리디