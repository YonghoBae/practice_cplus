#include <iostream>//������� iostream ����
#include <string>//������� string ����
#include <vector>//������� vector ����
using namespace std;//std����

int main()
{
    vector<string> s; //string ���� ������ vector s ���� ����
    string str; //string str ���� ����
    string last; //string last ���� ����
    cout << "�̸��� 5�� �Է��϶�" << endl; //���ڿ���� �� ����, ���ۺ��
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ">>";
        getline(cin, str);
        s.push_back(str);
    } // str�� �̿��ؼ� �Է¹ް� �̸� s�� �߰�

    last = s[0]; //�������� ���� �ڿ� ������ �̸��� �ϴ� s[0]�� ����

    for (int j = 1; j < 5; j++)
    {
        if (last < s[j])
        {
            last = s[j];
        }
    } // �׶� last���� s[j]�� �� �ڿ� ������ last�� s[j] ���� 

    cout << "�������� ���� �ڿ� ������ �̸��� " << last; // last�� ���
}