// https://school.programmers.co.kr/learn/courses/30/lessons/120911

#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    vector<char> v;
    for(auto str : my_string) {
        v.push_back(tolower(str));
    }
    sort(v.begin(), v.end());

    for(auto vv : v) {
        answer += vv;
    }
    return answer;
}

// 블로그 : tolower(c++)