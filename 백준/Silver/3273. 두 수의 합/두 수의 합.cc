#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,x, result=0;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
    cin >>  x;

    sort(a.begin(),a.end());

    for(int i=0;i<n;++i){
        if(a[i]>x) break;
        if(binary_search(a.begin(),a.end(),x-a[i])){
            result++;
        }
        
    }


    cout << result/2;
}