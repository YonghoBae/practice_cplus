#include <iostream>
using namespace std;

int main()
{
    int row = 0, col = 0, total = 1, x;
    bool big = false;
    cin >> x;
    for (int i = 1; i < x; ++i)
    {
        if(big){
            col--;
            row++;
        }
        else{
            col++;
            row--;
        }
        if(col<0||row<0&&big){
            col++;
            total++;
            big = false;
        }
        else if(col<0||row<0&&!big){
            row++;
            total++;
            big = true;
        }
    }
    cout << row + 1 << "/" << col + 1 << endl;
    return 0;
}