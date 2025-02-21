//programmers

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int size = answers.size();
    int f[]={1,2,3,4,5};
    int s[]={2,1,2,3,2,4,2,5};
    int t[]={3,3,1,1,2,2,4,4,5,5};
    
    int fc=0,sc=0,tc=0;
    for(int i=0;i<size;++i){
        if(f[i%5]==answers[i]) fc++;
        if(s[i%8]==answers[i]) sc++;
        if(t[i%10]==answers[i]) tc++;
    }
    int r = max({fc,sc,tc});
    if(r==fc){
        answer.push_back(1);
    }
    if(r==sc){
        answer.push_back(2);
    }
    if(r==tc){
        answer.push_back(3);
    }
    
    return answer;
}

//