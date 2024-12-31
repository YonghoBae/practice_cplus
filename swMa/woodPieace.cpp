//2947번
//구현 문제에 너무 취약하다 나
#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> w(5);
    for(int i=0;i<5;++i){
        cin >> w[i];
    }

    int temp, check;
    for(int i=0;i<5;++i){
        if(i==4){
            check = 0;
            for(int j=0;j<5;++j){
                if(w[j] != j+1){
                    i=0;
                    check = 1;
                }
            }
            if(!check) break;
        }

        if(w[i]>w[i+1]){
            temp = w[i];
            w[i] = w[i+1];
            w[i+1] = temp;
            for(int j=0;j<5;++j){
                cout << w[j] << " ";
            }
            cout << "\n";
        }
    }
}

//각각 1~5까지 쓰여진 나무조각 5개

//방법
//1.w[i] > w[i+1] swap(w[i],w[i+1])
//2.조각의 순서 출력
//3.내림차순이 아니면 다시 1단계로