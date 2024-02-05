#include <iostream>
using namespace std;

int main() {
    int A, B;

    while (cin >> A >> B) {
        if (A <= 0 || A >= 10 || B <= 0 || B >= 10) {
            cout << "0 < A, B < 10 이어야 합니다." << endl;
            break;
        }
        cout << A + B << endl;
    }

    return 0;
}