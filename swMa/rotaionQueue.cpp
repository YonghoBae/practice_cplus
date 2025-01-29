#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m; 
    vector<int> a(n+1,1);
    a[0] = 0;
    vector<int> s(m);
    for(int i=0;i<m;++i){
        cin >> s[i];
    }
    
    int cur=1,left,right;
    for(int i=0;i<s.size();++i){

    }

}

//연산
//1.첫번쨰 원소 추출
//2.왼쪽으로 한칸 이동
//3.오른쪽으로 한칸 이동

//2,3번 연산 횟수를 구하라
//1.연속O 1번 방법 사용
//2.연속x 2번 or 3번 중에 가까운 위치로 이동

//1 2 3 4 5 6 7 8 9 10
// 목표위치 - 현재위치
// 1+큐마지막숫자-현재위치 