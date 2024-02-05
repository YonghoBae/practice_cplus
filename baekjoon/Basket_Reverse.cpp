#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    int i, j;
    cin >> N >> M;
    vector<int> basket(N);
    for (int c = 0; c < N; c++)
    {
        basket[c] = c + 1;
    }
    for (int c = 0; c < M; c++)
    {
        cin >> i >> j;
        reverse(&basket[i-1],&basket[j]);
    }
    for(int c=0;c<N;c++){
        cout << basket[c] << " ";
    }
    return 0;
}