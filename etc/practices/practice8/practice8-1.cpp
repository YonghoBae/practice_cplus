#include<iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

void swap(Circle* c1, Circle* c2) {
	Circle* temp;
	temp = c1;
	c1 = c2;
	c2 = c1;
}

int main() {
	Circle A;
	Circle B(5);
	cout << "A�� ���� = " << A.getArea() << "  " << "B�� ���� = " << B.getArea() << endl;
	swap(A, B);
	cout << "A�� ���� = " << A.getArea() << "  " << "B�� ���� = " << B.getArea() << endl;
}
