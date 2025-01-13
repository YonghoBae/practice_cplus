//2644번 머리가 안돌아감 재풀이 필요
//사람번호 n = 1~100
// 촌수 계산해야하는 두 번호
// 관계의 개수 m
// 관계 번호 각각 부모 번호x, 자식 번호y m개
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int d[101][101] = {0};
int v[101] = {0};

int main(){
    int n,m,cx,cy,x,y,cnt=0;
    int cur;
    cin >> n >> cx >> cy >> m;
    for(int i=0;i<m;++i){
        cin >> x >> y;
        d[x][y] = 1;
    }

    stack<int> s;
    s.push(cx);
    while(!s.empty()){
        cur = s.top();
        if(cur==cy){
            cout << cnt;
            break;
        }
        cnt++;
        s.pop();
        for(int i=0;i<n;++i){
            if(d[cur][i]&&!v[i]){
                s.push(i);
            }
        }
    } 
}