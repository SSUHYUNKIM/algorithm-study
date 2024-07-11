// https://school.programmers.co.kr/learn/courses/30/lessons/86491

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int max_width = 0, max_height = 0;

    for (auto size : sizes) {
        // 가로, 세로 중 큰 값이 가로가 되도록 정렬
        sort(size.begin(), size.end());
        max_width = max(max_width, size[0]);
        max_height = max(max_height, size[1]);
    }

    return max_width * max_height;
}