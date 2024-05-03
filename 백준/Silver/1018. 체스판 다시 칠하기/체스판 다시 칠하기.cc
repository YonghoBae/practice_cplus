#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N,M,cnt1=0,cnt2=0,mincnt=65;
    cin >> N >> M;
    char chess[N][M];
    for(int i=0;i<N;++i){
        for(int j=0;j<M;++j){
            cin >> chess[i][j];
        }
    }

    for(int i=0;i<=N-8;++i){
        for(int j=0;j<=M-8;++j){
            for(int k=i;k<i+8;++k){
                for(int s=j;s<j+8;++s){
                    if(chess[k][s]=='B' && (k+s)%2==0){
                        cnt1++;
                    }
                    else if(chess[k][s]=='W' && (k+s)%2!=0){
                        cnt1++;
                    }
                    
                    if(chess[k][s]=='W'&& (k+s)%2==0){
                        cnt2++;
                    }
                    else if(chess[k][s]=='B' && (k+s)%2!=0){
                        cnt2++;
                    }
                }
            }
            if(mincnt>cnt1){
                mincnt = cnt1;            
            }
            if(mincnt>cnt2){
                mincnt = cnt2;          
            }
            cnt1 = 0;
            cnt2 = 0;
        }
    }

    cout << mincnt << endl;
    
    return 0;
}