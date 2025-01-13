//1182번 시간 너무 많이 걸려서 패스 다음에 다시 풀이
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, s,cnt=0,c;
    cin >> n >> s;
    vector<int> seq(n,0);
    for(int i=0;i<n;++i){
        cin >> seq[i];
        seq[i] -= s;
        if(seq[i]==0){
            c = i;
        }
    }
    
    sort(seq.begin(),seq.end());

    int b;
    for(int i=0;i<n;++i){
        b=seq[i];
        if(b==0){
            cnt++;
        }
        else if(b<0){
            for(int j=1;j<=b;++j){
                for(int k=b-1;k>=0;++k){
                    binary_search(seq.begin()+c,seq.end(),i);
                    binary_search(seq.begin()+c,seq.end(),k);
                }
            }
            
        }
    }
}

// -7 -3 -2 5 8
// 수열 중에 s가 있으면 +1
// s=0을 기준으로 >, <를 보고
// 작은 것들의 합 == 큰 것들의 합인걸 찾아야함.
// -7, -3 ,-2가 0보다 작으니까 -7을 기준으로 1,6/2,5/3,4을 찾는다.
