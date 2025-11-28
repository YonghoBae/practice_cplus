#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    //HxW .으로 초기화
    int H,W;
    cin >> H >> W;

    vector<vector<char>> board(H, vector<char> (W,'.'));

    for(int i=0;i<H;++i){
        for(int j=0;j<W;++j){
            cin >> board[i][j];
        }

    }
    
    int cntRow=0;
    bool flag=true;
    //각 행 or 열이 전부 #인 행, 열 개수 세기
    for(int i=0;i<H;++i){
        flag = true;
        for(int j=0;j<W;++j){
            if(board[i][j] == '.'){
                flag = false;
                break;
            }
        }

        if(flag){
            cntRow++;
        }
    }

    int cntCol=0;
    for(int i=0;i<W;++i){
        flag = true;
        for(int j=0;j<H;++j){
            if(board[j][i] == '.'){
                flag = false;
                break;
            }
        }

        if(flag){
            cntCol++;
        }
    }

    
    if(cntRow == H && cntCol == W){
        cout << min(H,W) << "\n";
    }else{
        cout << cntRow+cntCol << "\n";
    }
}

//H x W
//흰색 ".", 검은색 "#"
//모든 칸 흰색
// 연산 0회 이상을 통해 검은색 칠하기
//연산
//1. 격자판의 행 하나 or 열 하나 선택
//2. 선택한 모든 칸을 검은색으로 칠하기(이미 검은색은 그대로)
//현재 격자판 상태가 주어짐
//그 때 최소 몇번의 연산을 사용해야 하는지 구하는 프로그램 작성

//하나의 줄에 1개이상의 검은색 1개이상의 흰색이 있으면 그 행이나 열은 색칠 