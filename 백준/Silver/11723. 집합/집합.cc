#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    int M, size, temp;
    bool S[20] = {false};
    string a;
    cin >> M;
    vector<bool> check;
    for (int i = 0; i < M; ++i)
    {
        cin >> a;
        if (a == "all")
        {
            for (int j = 0; j < 20; ++j)
            {
                S[j] = true;
            }
            continue;
        }
        else if (a == "empty")
        {
            for (int j = 0; j < 20; ++j)
            {
                S[j] = false;
            }
            continue;
        }
        cin >> temp;
        if (a == "add")
        {
            if (!S[temp - 1])
            {
                S[temp - 1] = true;
            }
        }
        else if (a == "remove")
        {
            if (S[temp - 1])
            {
                S[temp - 1] = false;
            }
        }
        else if (a == "check")
        {
            if (S[temp - 1])
            {
                check.push_back(true);
            }
            else
            {
                check.push_back(false);
            }
        }
        else if (a == "toggle")
        {
            if (S[temp - 1])
            {
                S[temp - 1] = false;
            }
            else
            {
                S[temp - 1] = true;
            }
        }
    }
    size = check.size();
    for (int i = 0; i < size; ++i)
    {
        if(check[i]){
            cout << "1\n";
        }
        else if(!check[i]){
            cout << "0\n";
        }
    }
    return 0;
}