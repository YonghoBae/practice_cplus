//프로그래머스: 전화번호 목록
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    int psize = phone_book.size();
    
    sort(phone_book.begin(),phone_book.end());
    
    for(int i=1;i<psize;++i){
        if(phone_book[i].find(phone_book[i-1]) == 0){
            return false;
        }
    }
  
    return answer;
}


//정렬 후 substr을 사용하는 경우
// #include <string>
// #include <vector>
// #include <algorithm>
// #include <iostream>
// using namespace std;

// bool solution(vector<string> phoneBook) {
//     bool answer = true;

//     sort(phoneBook.begin(), phoneBook.end());

//     for ( int i = 0 ; i < phoneBook.size() - 1 ; i++ )
//     {
//         if ( phoneBook[i] == phoneBook[i+1].substr(0, phoneBook[i].size()) )
//         {
//             answer = false;
//             break;
//         }
//     }

//     return answer;
// }

//문제 분류대로 해쉬를 사용하는 경우
// #include <string>
// #include <vector>
// #include <unordered_map>

// using namespace std;

// bool solution(vector<string> phone_book) {
//     bool answer = true;

//     unordered_map<string, int> hash_map;
//     for(int i = 0; i < phone_book.size(); i++)
//         hash_map[phone_book[i]] = 1;

//     for(int i = 0; i < phone_book.size(); i++) {
//         string phone_number = "";
//         for(int j = 0; j < phone_book[i].size(); j++) {
//             phone_number += phone_book[i][j];
//             if(hash_map[phone_number] && phone_number != phone_book[i])
//                 answer = false;
//         }
//     }

//     return answer;
// }