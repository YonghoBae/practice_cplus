//2941번 크로아티아 알파벳`
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string s;
    string ca[8]={
        "c=","c-","dz=","d-","lj","nj","s=","z="
    };

    cin >> s;

    int ssize = s.size(), cnt=0;
    for(int i=0;i<ssize;++i){
        for(int j=0;j<8;++j){
            if(ca[j]==s.substr(i,ca[j].size())){
                i += ca[j].size() - 1;
                break;
            }

        }
        cnt++;
    }

    cout << cnt;
}

//목록에 없는 경우 1개개