// https://school.programmers.co.kr/learn/courses/30/lessons/12947

#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int sum = 0, temp = x;

    while(temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    return x % sum == 0;
}