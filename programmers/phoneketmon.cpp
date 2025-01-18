#include <vector>
using namespace std;

int solution(vector<int> nums)
{
    int cnt=0;
    int n = nums.size();
    bool check[200000] = {false};
    for(int i=0;i<n;++i){
        check[nums[i]] = true;
    }
    for(int i=0;i<200000;++i){
        if(check[i]) cnt++;
    }
    if(cnt>=n/2){
        cnt = n/2;
    }
    return cnt;
}
// N마리 중 N/2마리 가져가기 가능
// 같은 종류는 같은 번호

// 참고코드 1
// #include <bits/stdc++.h>
// using namespace std;

// int solution(vector<int> nums) {
//     unordered_set<int> s(nums.begin(), nums.end());

//     return min(nums.size() / 2, s.size());
// }

// 참고코드 2
// #include <vector>
// #include <unordered_map>

// using namespace std;

// int solution(vector<int> nums)
// {
//     unordered_map<int, int> hash;

//     for (auto num: nums) {
//         hash[num] += 1;
//     }

//     return min(hash.size(), nums.size() / 2);

// }