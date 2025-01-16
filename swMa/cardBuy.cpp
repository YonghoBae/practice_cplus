#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> p(n+1,0), dp(n+1,0);
    for(int i=1; i<=n;++i){
        cin >> p[i];
    }
    dp[1] = p[1];
    for(int i=1;i<=n;++i){
        for(int j=1;j<=i;++j){
            dp[i] = max(dp[i],dp[i-j] + p[j]);
        }
    }
    cout << dp[n];
}