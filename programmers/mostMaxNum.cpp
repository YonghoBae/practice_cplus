#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> num;
    for(auto n:numbers){
        num.push_back(to_string(n));
    }
    sort(num.begin(),num.end());
    int size = num.size();
    for(int i=size-1;i>=0;--i){
        cout << num[i];
        answer += num[i];
    }
    return answer;
}