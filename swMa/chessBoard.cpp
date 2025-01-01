#include<iostream>
#include<vector>


using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<char>> b(m,vector<char> (n));
    vector<vector<char>> c(m,vector<char> (n));
    int wcnt=0,bcnt=0;


    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin >> b[i][j];
        }
    }    

    cout << "\n";
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){ 
            if(i%2==0){
                if(j%2==0){
                    c[i][j] = 'W';
                }else{
                    c[i][j] = 'B';
                }
            }else{
                if(j%2==0){
                    c[i][j] = 'B';
                }else{
                    c[i][j] = 'W';
                }
            }

            cout <<c[i][j];
        }
        cout << "\n";
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(b[i][j] != c[i][j]){
                wcnt++;
            }
        }
    }

    cout << "\n";
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){ 
            if(i%2==0){
                if(j%2==0){
                    c[i][j] = 'B';
                }else{
                    c[i][j] = 'W';
                }
            }else{
                if(j%2==0){
                    c[i][j] = 'W';
                }else{
                    c[i][j] = 'B';
                }
            }

            cout << c[i][j];
        }
        cout << "\n";
    }    


    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(b[i][j] != c[i][j]){
                bcnt++;
            }
        }
    }

    if(wcnt<bcnt){
        cout << wcnt;
    }else{
        cout << bcnt;
    }

}

//M*N
//조건
//1.변을 공유하는 사각형은 다른 색 칠해져있어야함
//2.체스판은 2가지(맨 왼쪽 위가 흰색, 검은색)

//방법
//1. 맨 왼쪽 위가 흰색인 경우 변경해야하는 개수
//2. 맨 왽쪽 위가 검은색인 경우 변경해야하는 개수
//3. 1,2 중에 더 적은 개수
//4. 