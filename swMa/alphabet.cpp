#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> al;
    int a='a';
    char temp;
    string s;
    cin >> s;

    for(int i=0;i<26;++i){
        temp = a+i;
        if(find(s.begin(),s.end(),temp) != s.end()){
            al.push_back(find(s.begin(),s.end(),temp)-s.begin());
        }else{
            al.push_back(-1);
        }
    }

    for(auto as:al){
        cout << as << " ";
    }
}

//각 알파벳이 처음 등장하는 위치
//없을 경우 -1