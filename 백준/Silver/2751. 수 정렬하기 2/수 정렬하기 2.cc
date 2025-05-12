#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> num(n,0);

    
    for(int i=0;i<n;++i){
        cin >> num[i];
    }

    sort(num.begin(),num.end());

    for(auto ns:num){
        cout << ns << "\n";
    }
}