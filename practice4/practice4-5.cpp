#include <iostream> //헤더파일 iostream 포함
#include <string> //헤더파일 string 포함
using namespace std; //std생략

int main()
{
    string s, s_search, s_re; // string s, s_search, s_re 선언
    cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl; // 문자열 출력 및 개행,버퍼초기화
    getline(cin, s, '&'); // s 입력 &를 개행문자 인식
    cin.ignore(); //버퍼에 남아있는 \n 제거
    cout << "find: "; //문자열 출력
    getline(cin, s_search); // s_search 입력
    cout << "replace: "; //문자열 출력
    getline(cin, s_re); // s_re 입력
    int index = 0; //int형 index 선언 및 초기화
    while (true)
    {
        index = s.find(s_search, index); //index부터 s_search에 저장된 문자열을 탐색 후 위치를 index에 대입

        if (index == -1)
            break; //find함수가 s_search를 더이상 찾지못할때 -1을 리턴하므로 반복문 탈출

        s.replace(index, s_search.size(), s_re); // 찾은 index에 있는 s_search와 같은 문자열을 지우고 s_re를 대입
        index += s_re.size(); // 넣은 s_re 이후부터 탐색해야하므로 index에 s_re의 크기만큼 더함
    }
    cout << s << endl; // 바뀐 문자열 출력
}