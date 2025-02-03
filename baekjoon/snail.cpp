//1913번 달팽이
//아이디어는 생각했으나 구현 능력 부족
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, f;
    cin >> n >> f;
    vector<vector<int>> s(n,vector<int> (n));

    int dx[4] = {0,1,0,-1}, dy[4] = {-1,0,1,0};

    int x=n/2+1, y=n/2+1, len=1;
    for(int i=1;i<=n*n;++i){
        s[x][y] = i;
        //0이 아니고 2로 나누어 떨어지면
    }
}

//상: 0 -
//우: + 0
//하: 0 +
//좌: - 0
