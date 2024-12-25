//2579번

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> dp(n+1,0), s(n+1,0);
    vector<bool> stack(n+1,1);

    for(int i=1;i<=n;++i){
        cin >> s[i];
    }

    dp[1] = s[1];
    for(int i=2;i<=n;++i){
        if(stack[i]==0){
            dp[i] = dp[i-2]+s[i];
        }
        else{
            if((dp[i-1]+s[i]) < (dp[i-2]+s[i])){
                stack[i] = 1;
                dp[i] = dp[i-2]+s[i];
            }else{
                stack[i] = 0;
                dp[i] = dp[i-1]+s[i];
            }
        }
    }

    cout << dp[n];
}
