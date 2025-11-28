//프로그래머스: 달리기 경주
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    unordered_map<string,int> rank;
    
    int num = players.size();
    for(int i=0;i<num;++i){
        rank[players[i]] = i;
    }

    int currRank;
    for(auto c:callings){
        currRank = rank[c];
        rank[c]--;
        rank[players[currRank-1]]++;
        
        swap(players[currRank-1],players[currRank]);
        
    }
    
    answer = players;
    
    return answer;
}

//players는 등수 순서대로 선수 이름
//callings면 다음사람 추월
//