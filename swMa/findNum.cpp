//1920번 수 찾기
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m,b, r;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
    sort(a.begin(),a.end());

    cin >> m;
    for(int i=0;i<m;++i){
        cin >> b;
        r = binary_search(a.begin(),a.end(),b);
        cout << r << "\n";
    }
}