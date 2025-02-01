#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> num(n);
    for(int i=0;i<n;++i){
        cin >> num[i];
    }
    
    sort(num.begin(),num.end());
    auto it = unique(num.begin(),num.end());
    num.erase(it,num.end());

    for(auto i:num){
        cout << i << " ";
    }
}