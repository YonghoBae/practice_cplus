#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s,t;
    int size, n;

    while(cin >> s >> t){
        size = t.size();
        n=0;
        for(int i=0;i<size;++i){
            if(t[i]==s[n]){
                n++;
            }
        }
        if(n>=s.size()){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
    return 0;
}