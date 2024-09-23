#include <iostream>
#include <string>
using namespace std;

string laststr(string s1[])
{
    string max_str = s1[0];
    for (int i = 1; i < 4; i++)
    {
        if (max_str < s1[i])
        {
            max_str = s1[i];
        }
    }
    return max_str;
}

int main()
{
    string s[5];
    string s0;
    for (int i = 0; i < 5; i++)
    {
        getline(cin, s[i]);
    }
    s0 = laststr(s);
    cout << s0 << endl;
}