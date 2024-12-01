// https://school.programmers.co.kr/learn/courses/30/lessons/12933

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    string str = to_string(n);

    sort(str.begin(), str.end(), greater<>());

    return stoll(str);
}