#include<iostream>
using namespace std;

template<class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int& retSize){
    T* result = new T[sizeSrc];
    retSize = 0;
    for(int i=0; i<sizeSrc; i++) {
        bool found = false;
        for(int j=0; j<sizeMinus; j++) {
            if(src[i] == minus[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            result[retSize] = src[i];
            retSize++;
        }
    }
    
    return result;
}

int main() {
// remove() �Լ��� int�� ��üȭ�ϴ� ���
    cout << "���� �迭 {1,2,3,4}���� ���� �迭 {-3,5,10,1,2,3}�� ���ϴ�" << endl;
    int x[]={1,2,3,4};
    int y[]={-3,5,10,1,2,3};
    int retSize;
    int *p = remove(x, 4, y, 6, retSize);
    if(retSize == 0) {
        cout << "��� ���ŵǾ� �����ϴ� �迭�� �����ϴ�." << endl;
        return 0;
    }
    else {
        for(int i=0; i<retSize; i++) // �迭�� ��� ���� ���
            cout << *(p+i) << ' ';
        cout << endl;
        delete [] p; // �Ҵ���� �迭 ��ȯ
    }
    
// remove() �Լ��� double�� ��üȭ�ϴ� ���
// �̰��� �ۼ�
    cout << "�Ǽ� �迭 {0.1,0.2,0.3,0.4}����  �Ǽ� �迭 {-0.3,0.5,0.1,0.2,0.3}�� ���ϴ�" << endl;
    double dx[]={0.1,0.2,0.3,0.4};
    double dy[]={-0.3,0.5,0.1,0.2,0.3};
    double *dp = remove(dx, 4, dy, 5, retSize);
    if(retSize == 0) {
        cout << "��� ���ŵǾ� �����ϴ� �迭�� �����ϴ�." << endl;
        return 0;
    }
    else {
        for(int i=0; i<retSize; i++) // �迭�� ��� ���� ���
            cout << *(dp+i) << ' ';
        cout << endl;
        delete [] dp; // �Ҵ���� �迭 ��ȯ
    }
}