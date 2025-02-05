// //1051번 숫자 정사각형
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    vector<vector<int>> squr(n, vector<int>(m));
    string s;
    for(int i=0;i<n;++i){
        cin >> s;
        for(int j=0;j<m;++j){
            squr[i][j] = s[j] - '0';
        }
    }

    int maxn = max(n,m);
    int result=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            for(int k=1;i+k<n&&j+k<m;++k){
                if(squr[i][j]==squr[i+k][j+k]&&squr[i][j]==squr[i+k][j]&&squr[i][j]==squr[i][j+k]){
                    result = max(result,k);
                }           
            }
        }
    }

    result = (result+1)*(result+1);

    cout << result;
}

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int n, m;
//     cin >> n >> m;

//     vector<vector<int>> squr(n, vector<int>(m));
//     string s;

//     for(int i = 0; i < n; ++i){
//         cin >> s;
//         for(int j = 0; j < m; ++j){
//             squr[i][j] = s[j] - '0';
//         }
//     }

//     int result = 1;

//     for(int i = 0; i < n; ++i){
//         for(int j = 0; j < m; ++j){
//             for(int k = 1; i + k < n && j + k < m; ++k){
//                 if(squr[i][j] == squr[i + k][j] &&
//                    squr[i][j] == squr[i][j + k] &&
//                    squr[i][j] == squr[i + k][j + k]){
//                     result = max(result, (k + 1) * (k + 1));
//                 }
//             }
//         }
//     }

//     cout << result;
//     return 0;
// }


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int n,m;
//     cin >> n >> m;
//     string s;

//     vector<vector<int>> squr(n,vector<int> (m));

//     for(int i=0;i<n;++i){
//         cin >> s;
//         for(int j=0;j<m;++j){
//             squr[i][j] = s[j] - '0';
//         }
//     }

//     int maxn = min(n,m);

//     int result=0;
//     for(int i=0;i<n;++i){
//         for(int j=0;j<m;++j){
//             for(int k=maxn-1;k>0;--k){
//                 if(i+k<n && j+k<m && squr[i][j] == squr[i+k][j+k] && squr[i][j] == squr[i][j+k] && squr[i][j] == squr[i+k][j])
//                 {
//                     if(k > result){
//                         result = k+1;
//                     }
//                 }
            
//             }
//         }
//     }

//     if(result == 0) result++; 

//     cout << result*result;
// }

