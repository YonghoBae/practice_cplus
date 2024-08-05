#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m,temp;
    cin >> n >> m;
    vector<vector<int>> A(n,vector<int>(m));
    vector<vector<int>> B(n,vector<int>(m));
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin >> A[i][j];
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin >> temp;
            B[i][j] = A[i][j] + temp;
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cout << B[i][j] << " ";
        }
        cout << "\n";
    }

}