#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> basket(N, 0); // N 크기의 벡터를 0으로 초기화

    for (int c = 0; c < M; c++)
    {
        int i, j, k;
        cin >> i >> j >> k;
        for (int s = i-1; s <= j-1 && s < N; s++) // 배열 범위 확인
        {
            basket[s] = k;
        }
    }
    for (int c = 0; c < N; c++)
    {
        cout << basket[c] << " ";
    }
    return 0;
}
