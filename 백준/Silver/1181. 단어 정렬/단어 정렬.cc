#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// 문자열 정렬 기준: 1) 길이가 짧은 순 2) 사전순
bool cmp(string s1, string s2) {
    if (s1.size() != s2.size()) {
        return s1.size() < s2.size();
    }
    return s1 < s2;  // 사전순 정렬
}

int main() {
    int n;
    cin >> n;
    vector<string> s(n);

    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    // 정렬 수행
    sort(s.begin(), s.end(), cmp);

    // 중복 제거 (더 안전한 방식)
    s.erase(unique(s.begin(), s.end()), s.end());

    // 결과 출력
    for (const string &str : s) {
        cout << str << "\n";
    }

    return 0;
}
