#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string S,temp;
    map<string,bool> DSN;
    cin >> S;
    int cnt =0, n = S.length(), res;

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            temp = S.substr(i,j);
            if(DSN.find(temp) == DSN.end()){
                DSN[temp] = true;
                cnt++;
            }      
        }
    }
    cout << cnt;
}