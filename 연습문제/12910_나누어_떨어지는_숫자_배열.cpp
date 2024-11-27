// https://school.programmers.co.kr/learn/courses/30/lessons/12910

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;

    for(auto a : arr) {
        if(a % divisor == 0) {
            answer.push_back(a);
        }
    }

    sort(answer.begin(), answer.end());

    if(answer.size() == 0) {
        answer.push_back(-1);
    }

    return answer;
}