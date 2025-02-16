//프로그래머스 [3차] 자동완성
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<string> words) {
    int answer = 0, size = words.size();
    sort(words.begin(),words.end());
   
    int wsize, pcnt, mcnt;
    string sub;
    for(int i=0;i<size;++i){
        wsize = words[i].size();
        pcnt = mcnt = 0;
        
        for(int j=1;j<wsize;++j){
            sub = words[i].substr(0,j);
            if(i==0){
                if(sub == words[i+1].substr(0,j)) pcnt = j; 
            }else if(i==size-1){
                if(sub == words[i-1].substr(0,j)) mcnt = j;
            }else{
                if(sub == words[i+1].substr(0,j)) pcnt=j;
                if(sub == words[i-1].substr(0,j)) mcnt=j;
            }
        }
        answer += max(pcnt,mcnt)+1;
    }
    return answer;
}
//자동완성 앞글자가 같은거 찾으면 될듯/자동완성 앞글자가 같은거 찾으면 될듯
//1.사전순 정렬
//2.한단어 기준 앞뒤로만 비교
//3.앞뒤 중 가장 많이 겹치는 단어의 개수 저장
