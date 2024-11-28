// https://school.programmers.co.kr/learn/courses/30/lessons/1845

#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> nums)
{
    int answer = nums.size() / 2;
    unordered_set<int> unSet;

    for(auto num : nums) {
        unSet.insert(num);
    }

    if(answer > unSet.size()) {
        answer = unSet.size();
    }

    return answer;
}