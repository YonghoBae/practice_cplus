#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, temp;
    cin >> n >> m;
    
    unordered_set<int> setA;
    unordered_set<int> setB;

    for (int i = 0; i < n; ++i) {
        cin >> temp;
        setA.insert(temp);
    }

    for (int i = 0; i < m; ++i) {
        cin >> temp;
        setB.insert(temp);
    }
    
    int cnt = 0;

    for (const int &elem : setA) {
        if (setB.find(elem) == setB.end()) {
            ++cnt;
        }
    }

    for (const int &elem : setB) {
        if (setA.find(elem) == setA.end()) {
            ++cnt;
        }
    }
    
    cout << cnt << endl;
    
    return 0;
}
