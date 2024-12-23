// 1463번
// 다시 풀이 필요

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> dp;
    int N;
    cin >> N;

    dp.resize(N+1);
    dp[0] = -1;
    dp[1] = 0;

    for(int i=2;i<=N;++i){
        dp[i] = dp[i-1] + 1;
        
        if(i%2==0){
            dp[i]=min(dp[i], dp[i/2]+1);
        }

        if(i%3==0){
            dp[i]=min(dp[i] ,dp[i/3]+1);
        }
    }

    cout << dp[N];
}