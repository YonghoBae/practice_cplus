#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N, index=0, move;
    cin >> N;
    vector<pair<int,int>> ba(N);
    for(int i=0;i<N;++i){
        ba[i].first=i+1;
        cin >> ba[i].second;
    }
    while(!ba.empty()){
        index = index % ba.size();
        cout << ba[index].first << " ";
        move = ba[index].second;
        if(move > 0){
           move--;
        }
        ba.erase(ba.begin()+index); 
        if(ba.empty()) break;

        index += move;
        if(index < 0 || index >= ba.size()){
            index = (index % int(ba.size()) + ba.size()) % ba.size();
        }
    }
    return 0;
}
