//1946번 신입 사원
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    int t,n,f,cnt;

    cin >> t;
    for(int k=0;k<t;++k){
        cin >> n;
        vector<pair<int,int>> s(n);
        

        for(int i=0;i<n;++i){
            cin >> s[i].first >> s[i].second;
        }

        sort(s.begin(),s.end());

        f = s[0].second, cnt=0;
        for(int i=1;i<n;++i){
            if(f<s[i].second) cnt++;
            else f = s[i].second;
        }

        cout << n-cnt << "\n";
    }
}

//1차=x 2차=y 시험
//e 지원자
//if(e[i].first<어떤지원자.first && e[i].second < 어떤지원자.second) e[i] 탈락;
//선발가능한 최대 인원수

//3 2
//1 4
//4 1
//2 3
//5 5

//1 4
//2 3
//3 2
//4 1
//5 5

//1 4
//2 5
//3 6
//4 2
//5 7
//6 1
//7 3