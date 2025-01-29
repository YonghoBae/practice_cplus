#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(pair<int,int> i1, pair<int,int> i2){
    if(i1.first==i2.first) return i1.second<i2.second;
    else return i1.first<i2.first;
}

int main(){
    int n;
    cin >> n;

    vector<pair<int,int>> index(n);

    for(int i=0;i<n;++i){
        cin >> index[i].first >> index[i].second;
    }

    sort(index.begin(),index.end(),cmp);

    for(auto i:index){
        cout << i.first << " "<< i.second <<"\n";
    }
}

//x좌표 asc, y좌표 asc
