#include <iostream>//헤더파일 iostream 포함
#include <string>//헤더파일 string 포함
#include <vector>//헤더파일 vector 포함
using namespace std;//std생략

int main()
{
    vector<string> s; //string 삽입 가능한 vector s 변수 선언
    string str; //string str 변수 선언
    string last; //string last 변수 선언
    cout << "이름을 5개 입력하라" << endl; //문자열출력 및 개행, 버퍼비움
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ">>";
        getline(cin, str);
        s.push_back(str);
    } // str을 이용해서 입력받고 이를 s에 추가

    last = s[0]; //사전에서 가장 뒤에 나오는 이름을 일단 s[0]로 설정

    for (int j = 1; j < 5; j++)
    {
        if (last < s[j])
        {
            last = s[j];
        }
    } // 그때 last보다 s[j]가 더 뒤에 나오면 last에 s[j] 대입 

    cout << "사전에서 가장 뒤에 나오는 이름은 " << last; // last값 출력
}