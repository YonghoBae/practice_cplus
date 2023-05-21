#include <iostream>
using namespace std;

class Math {
    int a;
    int b;
    public:
    static int abs(int a) { return a>0?a:-a; }
    static int max(int a, int b) { return (a>b)?a:b; }
    static int min(int a, int b) { return (a>b)?b:a; }
};

int main() {
    Math *m;
    cout << m->abs(-5) << endl;
    cout << m->max(10,8) << endl;
    cout << m->min(-3,-8) << endl;
}