#include<iostream>
using namespace std;

class MyVector {
	int *mem;
	int size;
public:
	MyVector(int n = 100, int val = 0);
	~MyVector() { delete[] mem;}
	void show(int size);
};

MyVector::MyVector(int n, int val) {
	mem = new int[n];
	size = n;
	for (int i = 0; i < size; i++) mem[i] = val;
}

void MyVector::show(int size) {
	for (int i = 0; i < size; i++) {
		cout << " " << mem[i];
	}
	cout << endl;
}

int main() {
	MyVector MV1;
	MyVector MV2(50, 3);
	MV1.show(100);
	MV2.show(50);
}