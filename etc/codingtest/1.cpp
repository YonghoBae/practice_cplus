#include<iostream>
using namespace std;

class Tower{
    int hegiht;
    public:
    Tower(){
        hegiht=1;
    }
    Tower(int a){
        hegiht = a;
    }
    int getHeight(){
        return hegiht;
    }
};

int main(){
    Tower myTower;
    Tower seoulTower(100);
    cout << myTower.getHeight() << endl;
    cout << seoulTower.getHeight() << endl;
}