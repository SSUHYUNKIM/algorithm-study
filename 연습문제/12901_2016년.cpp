// https://school.programmers.co.kr/learn/courses/30/lessons/12901

#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    string date[7] = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
    int day[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum = 0;

    for(int i = 0; i < a - 1; i++) {
        sum += day[i];
    }
    sum += b;

    return date[sum % 7];
}