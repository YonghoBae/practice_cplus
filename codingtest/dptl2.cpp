#include<iostream>
using namespace std;

class Add {
    protected:
    int x;
    int y;
    
    public:
    Add(int x, int y) {
        this->x = x;
        this->y = y;
    }
    
    int add() { return x + y; }
};

class AddSub : public Add {
    public:
    AddSub(int a, int b) : Add(a, b) {}  // Calling the base class constructor
    
    int sub() { return x - y; }
};

int main() {
    AddSub ob(12, 15);
    cout << ob.add() << " " << ob.sub();
}
