#include<iostream>
using namespace std;

class Shape{
    public:    
    int width;
    int height;
    Shape() {}  // default constructor
    virtual int area(){
        return width*height;
    }
};

class Rectangle : public Shape{
    public:
    Rectangle(int w, int h) {
        this->width = w;
        this->height = h;
    }
    virtual int area() override {   // using 'override' keyword is a good practice for clarity and to catch errors
        return width*height;
    }
};

int main(){
    Rectangle rect(5, 3);
    cout << rect.width << " " << rect.height << " " << rect.area();
}
