//1448번 삼각형 만들기
//빌드실수 유의, 그 외에 로직구현에는 문제없었음
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> t(n,0);
    for(int i=0;i<n;++i){
        cin >> t[i];
    }
    
    sort(t.begin(),t.end());

    for(int i=n-1;i>=2;--i){
        if(t[i]<(t[i-1]+t[i-2])){
            cout << t[i]+t[i-1]+t[i-2];
            return 0;
        }
    }

    cout << -1;
    
}
