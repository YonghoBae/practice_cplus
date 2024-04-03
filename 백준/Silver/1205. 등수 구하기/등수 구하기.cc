#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, New, P, result=-1;
    cin >> N >> New >> P;
    vector<int> list(P,-1);
    if(N==0){
        cout << 1 << endl;
        return 0;
    }
    for(int i=0;i<N;++i){
        cin >> list[i];
    }
    for(int i=0;i<P;++i){
        if(list[i]<New){
            result=i+1;
            break;
        }
        else if(list[i]==New&&list[P-1]!=New){
            result=i+1;
            break;
        }
        else if(list[i]==New&&list[P-1]==New){
            result=-1;
        }
    }
    cout << result << endl;
    return 0;
}
