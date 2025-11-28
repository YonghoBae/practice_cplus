//2751번 수 정렬하기2
//c언어로 하면 O(nlogn)인 정렬로 구현해야할거같은데 c++이라 그냥 시간복잡도 안걸리는 것 같음.
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