#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,m,b;
    cin >> n >> m >> b;
    vector<vector<int>> g(n,vector<int> (m));
    
    int minH = 256, maxH = 0;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin >> g[i][j];
            minH = min(minH, g[i][j]);
            maxH = max(maxH, g[i][j]);
        }
    }

    int min_time = 999999999, result_height = 0;
    
    for(int h=minH; h<=maxH; h++){
        int blocks = b;
        int time = 0;
        
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                int diff = g[i][j] - h;
                if(diff > 0){
                    blocks += diff;
                    time += diff * 2;
                }else if(diff < 0){
                    blocks += diff;
                    time -= diff;
                }
            }
        }
        
        if(blocks >= 0 && (time < min_time || (time == min_time && h > result_height))){
            min_time = time;
            result_height = h;
        }
    }

    cout << min_time << " " << result_height;
    return 0;
}
//