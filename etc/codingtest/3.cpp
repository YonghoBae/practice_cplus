#include<iostream>
using namespace std;

class Rectangle{
    private:
    int width;
    int height;
    public:
    void setDimensions(int w, int h){
        width = w;
        height = h;
    }
    int getWidth(){
        return width;
    }
    int getHeight(){
        return height;
    }
};

void SetGet(Rectangle *r){
    int w,h;
    cin >> w;
    cin >> h;
    r->setDimensions(w, h);
    cout << r->getWidth() << " " << r->getHeight();
}

int main(){
    Rectangle rect;
    Rectangle* rectPtr = &rect;
    SetGet(rectPtr);
    return 0;
}