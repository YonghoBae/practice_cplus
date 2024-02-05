#include<iostream>
#include<queue>
using namespace std;


int main(){
    int N, n=1, temp;
    cin >> N;
    queue<int> card;
    for(int i=1;i<=N;i++){
        card.push(i);
    }
    while(1){
        if(card.size()==1){
            break;
        }
        if(n==1){
            card.pop();
            n=2;
        }
        else if(n==2){
            temp = card.front();
            card.pop();
            card.push(temp);
            n=1;
        }
    }
    cout << card.front();
}