#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    int size, count = 0;
    cin >> S;
    size = S.size();
    for (int i = 0; i < size; ++i)
    {
        if (65 <= S[i] && S[i] < 68)
        {
            count += 3;
        }
        else if (68 <= S[i] && S[i] < 71)
        {
            count += 4;
        }
        else if (71 <= S[i] && S[i] < 74)
        {
            count += 5;
        }
        else if (74 <= S[i] && S[i] < 77)
        {
            count += 6;
        }
        else if (77 <= S[i] && S[i] < 80)
        {
            count += 7;
        }
        else if (80 <= S[i] && S[i] < 84)
        {
            count += 8;
        }
        else if (84 <= S[i] && S[i] < 87)
        {
            count += 9;
        }
        else if (87 <= S[i] && S[i] <= 90)
        {
            count += 10;
        }
    }
    cout << count;
}