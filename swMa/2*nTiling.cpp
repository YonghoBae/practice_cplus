#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> dp(n+1,0), r(n+1), g(n+1), b(n+1), mi(n+1,-1);
    for(int i=1;i<=n;++i){
        cin >> r[i] >> g[i] >> b[i];
    }

    dp[1] = min({r[1],g[1],b[1]});

        if(r[i]<g[i] && r[i]<b[i]){
            
        }else if(g[i]<r[i] && g[i]<b[i]){

        }else{

        }    

    for(int i=2;i<=n;++i){
        if(r[i]<g[i] && r[i]<b[i]){
            
        }else if(g[i]<r[i] && g[i]<b[i]){

        }else{

        }
    }
}