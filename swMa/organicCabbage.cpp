#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    for(int s=0;s<t;++s){
        int m, n, k, x, y;
        cin >> m >> n >> k;
        int cnt = 0;
        vector<vector<int>> c(m, vector<int>(n, 0));
        vector<vector<bool>> v(m, vector<bool>(n, false));
        
        for(int i=0;i<k;++i){
            cin >> x >> y;
            c[x][y] = 1;
        }
        
        queue<pair<int,int>> q;
        int a[4] = {1,-1,0,0};
        int b[4] = {0,0,1,-1};
        
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(!v[i][j] && c[i][j] == 1){
                    cnt++;
                    q.push({i,j});
                    v[i][j] = true;
                    
                    while(!q.empty()){
                        auto curr = q.front();
                        q.pop();
                        
                        for(int k=0;k<4;++k){
                            int nx = curr.first + a[k];
                            int ny = curr.second + b[k];
                            if(nx>=0 && nx<m && ny>=0 && ny<n && !v[nx][ny] && c[nx][ny] == 1){
                                q.push({nx,ny});
                                v[nx][ny] = true;
                            }
                        }
                    }
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}