#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,m,k;
    cin >> n >> m >>k;

    vector<vector<int>> a(n,vector<int> (n,5));  // 양분
    vector<vector<int>> ap(n,vector<int> (n,0)); // 추가되는 양분
    vector<vector<vector<int>>> w(n,vector<vector<int>>(n));  // 각 칸의 나무 나이들

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin >> ap[i][j];
        }
    }

    int x,y,z;
    for(int i=0;i<m;++i){
        cin >> x >> y >> z;
        x--; y--;  // 0-based 인덱스로 변환
        w[x][y].push_back(z);
    }

    while(k--){
        // 봄과 여름
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                if(w[i][j].size() > 0){
                    sort(w[i][j].begin(), w[i][j].end());  // 나이 순 정렬
                    vector<int> temp;  // 살아남은 나무
                    int dead = 0;  // 죽은 나무의 양분

                    for(int age : w[i][j]){
                        if(a[i][j] >= age){
                            a[i][j] -= age;
                            temp.push_back(age + 1);
                        }else{
                            dead += age/2;
                        }
                    }
                    w[i][j] = temp;
                    a[i][j] += dead;  // 죽은 나무의 양분 추가
                }
            }
        }

        // 가을
        int r[8]={-1,-1,-1,0,0,1,1,1},c[8]={-1,0,1,-1,1,-1,0,1};
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                for(int age : w[i][j]){
                    if(age % 5 == 0){
                        for(int d=0;d<8;++d){
                            int tx = i+r[d];
                            int ty = j+c[d];
                            if(tx>=0 && tx<n && ty>=0 && ty<n){
                                w[tx][ty].push_back(1);
                            }
                        }
                    }
                }
            }
        }

        // 겨울
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                a[i][j] += ap[i][j];
            }
        }
    }

    // 살아있는 나무 세기
    int result = 0;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            result += w[i][j].size();
        }
    }
    
    cout << result;
    return 0;
}

// 땅 NxN
// 처음 모든 칸 5
// M개 나무 심기
// (x,y)나무위치 z나이

//봄
// 나무는 나이만큼 양분 먹고 나이 1증가가
// 나이만큼 양분 못 먹으면 죽음
//여름
//봄에 죽은 나무 -> 양분
//양분 = 죽은 나무 나이/2
//가을
//번식하는 나무 나이는 5의 배수
//인접한 8개 칸에 나이 1인 나무 생성
//겨울
//A[r][c]만큼 양분 추가
//k년 후 살아있는 나무의 개수수