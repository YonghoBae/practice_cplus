//programmers: 최소직사각형
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int len = sizes.size();
    int temp, max, min;
    
    for(int i=0;i<len;++i){
        if(sizes[i][0]<sizes[i][1]){
            temp = sizes[i][1];
            sizes[i][1] = sizes[i][0];
            sizes[i][0] = temp;
        }
    }
    
    min = sizes[0][1];
    max = sizes[0][0];
    
    for(auto i:sizes){
        cout << i[0] << i[1] << endl;
    }
    
    for(int i=0;i<len;++i){
        if(max<sizes[i][0]){
            max = sizes[i][0];
        }
        if(min<sizes[i][1]){
            min = sizes[i][1];
        }
    }
    cout << max << min;
    
    answer = max*min;
    
    return answer;
}

//명항 가로 세로