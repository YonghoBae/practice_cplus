#include <iostream> //������� iostream ����
#include <string> //������� string ����
using namespace std; //std����

int main()
{
    string s, s_search, s_re; // string s, s_search, s_re ����
    cout << "���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� &�����Դϴ�." << endl; // ���ڿ� ��� �� ����,�����ʱ�ȭ
    getline(cin, s, '&'); // s �Է� &�� ���๮�� �ν�
    cin.ignore(); //���ۿ� �����ִ� \n ����
    cout << "find: "; //���ڿ� ���
    getline(cin, s_search); // s_search �Է�
    cout << "replace: "; //���ڿ� ���
    getline(cin, s_re); // s_re �Է�
    int index = 0; //int�� index ���� �� �ʱ�ȭ
    while (true)
    {
        index = s.find(s_search, index); //index���� s_search�� ����� ���ڿ��� Ž�� �� ��ġ�� index�� ����

        if (index == -1)
            break; //find�Լ��� s_search�� ���̻� ã�����Ҷ� -1�� �����ϹǷ� �ݺ��� Ż��

        s.replace(index, s_search.size(), s_re); // ã�� index�� �ִ� s_search�� ���� ���ڿ��� ����� s_re�� ����
        index += s_re.size(); // ���� s_re ���ĺ��� Ž���ؾ��ϹǷ� index�� s_re�� ũ�⸸ŭ ����
    }
    cout << s << endl; // �ٲ� ���ڿ� ���
}