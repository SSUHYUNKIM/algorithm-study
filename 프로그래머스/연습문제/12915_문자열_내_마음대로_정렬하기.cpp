// https://school.programmers.co.kr/learn/courses/30/lessons/12915

// Todo: sort 커스텀

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    sort(strings.begin(), strings.end(), [n](const string& a, const string& b) {
        if (a[n] != b[n]) {
            return a[n] < b[n];
        }

        return a < b;
    });

    return strings;
}