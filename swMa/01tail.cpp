#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> dp(n+1,0);
    dp[1] = 1;
    dp[2] = 2;
    for(int i=3;i<=n;++i){
        dp[i] = dp[i-2]*2 + 1;
    }
    cout << dp[n]%15746;
}