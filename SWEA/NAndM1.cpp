#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<int> seq;
vector<bool> visited;
vector<string> subSeqResult;

void findSeq(vector<int> subSeq, int cur, int n, int m){
    // 수열이 m개면 저장 후 종료
    if(subSeq.size() == m){
        string result = "";
        
        for(int i=0;i<m;++i){
            result += to_string(subSeq[i]) + " ";
        }

        subSeqResult.push_back(result);
    }

    // 아직 방문하지 않은 요소에 대해서 재귀실행
    for(int i=cur;i<n;++i){
        if(!visited[i]){
            subSeq.push_back(seq[i]);
            visited[i] = true;
            findSeq(subSeq,0, n, m);
            subSeq.pop_back();
            visited[i] = false;
        }
    }

}

int main(){
    // n m 입력
    int n,m;
     
    cin >> n >> m;
    
    seq.resize(n);
    visited.resize(n,false);

    //수열 초기화
    for(int i=1;i<=n;++i){
        seq[i-1] = i;
    }

    vector<int> subSeq;
    //m개인 수열 찾기
    findSeq(subSeq, 0, n, m);

    for(string s: subSeqResult){
        cout << s << "\n";
    }
    // 수열 사전순으로 정렬
}


//자연수 n,m
//길이 m인 수열을 모두 구해야함
//1~n까지 m개를 중복없이 m개를 고른 수열
//사전 순으로 증가