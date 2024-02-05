#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> basket(N);
    for(int c=0;c<N;c++){
        basket[c] = c+1;
    }
    for (int c = 0; c < M; c++)
    {
        int i, j;
        cin >> i >> j;
        swap(basket[i-1],basket[j-1]);
    }
    for (int c = 0; c < N; c++)
    {
        cout << basket[c] << " ";
    }
    return 0;
}
