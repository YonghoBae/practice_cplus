//1032번 명령 프롬프트
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<string> s(n);
    string result;
    for(int i=0;i<n;++i){
        cin >> s[i];
    }

    if(n==1){
        cout << s[0];
        return 0;
    }

    int sn = s[0].size();
    char c;
    for(int i=0;i<sn;++i){
        c=s[0][i];
        for(int j=1;j<n;++j){
            if(s[j][i] != c){
                result.push_back('?');
                break;
            }
            if(j==n-1){
                result.push_back(c);
                break;
            }
        }
    }
    cout <<result;
}

//파일 이름 길이 같음
// . 알파벳 ?