#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, cnt, total, size;
    cin >> t;
    vector<string> s(t);
    for(int i=0;i<t;++i){
        cin >> s[i];
    }

    for(int i=0;i<t;++i){
        cnt = 0;
        total = 0;
        size = s[i].size();
        for(int j=0;j<size;++j){
            if(s[i][j] == 'O'){
                cnt++;
                total += cnt;
            }else if(s[i][j] == 'X'){
                cnt = 0;
            }
        }
        cout << total << "\n";
    }
}