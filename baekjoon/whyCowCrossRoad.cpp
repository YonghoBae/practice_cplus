//14467번 소가 길을 건너간 이유 1
//내가 너무 멍청했다다
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair<int,int>> cow(11,{0,0});

    int cn, cw;
    for(int i=0;i<n;++i){
        cin >> cn >> cw;
        if(cw){
            cow[cn].second++;
        }else{
            cow[cn].first++;
        }
    }

    int max=0,temp,cnt;
    for(auto c:cow){
        if(c.first>c.second){
            temp = 0;
        }else{
            temp = 1;
        }
        cnt=0;
        while(c.first>0 && c.second>0){
            if(temp){
                c.second--;
                temp = 0;
            }else{
                c.first--;
                temp = 1;
            }
            cnt++;
        }
        if(max<cnt){
            max = cnt;
        }
    }

    cout << max;
}

// 소의 위치 N번 관찰
// 소 번호, 위치치