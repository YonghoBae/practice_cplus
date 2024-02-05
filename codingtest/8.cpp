#include<iostream>
using namespace std;

class Point {
    int x, y;
    public:
    Point(int x, int y) { this->x = x; this->y= y; }
    int getx() { return x; }
    int gety() { return y; }
    protected:
    void move(int x, int y) { this->x = x; this->y= y; }
};

class ColorPoint : public Point{
    string color;
    public:
    ColorPoint(int a, int b, string c) : Point(a, b){color = c;}
    void setPoint(int a, int b){
        move(a,b);
    }
    void setColor(string c){
        color = c;
    }
    void show(){
        cout << color << " " << getx() << " " << gety() << endl;
    }
};

int main() {
    ColorPoint cp(5, 5, "RED");
    cp.setPoint(10, 20);
    cp.setColor("BLUE");
    cp.show();
}
