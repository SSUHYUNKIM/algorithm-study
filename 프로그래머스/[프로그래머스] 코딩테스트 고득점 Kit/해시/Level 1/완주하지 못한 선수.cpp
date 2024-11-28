// https://school.programmers.co.kr/learn/courses/30/lessons/42576?language=cpp

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> participant_map;

    // 참가자 명단을 해시맵에 추가
    for(auto part : participant) {
        participant_map[part]++;
    }

    // 완주한 사람의 이름을 해시맵에서 감소
    for(auto com : completion) {
        participant_map[com]--;
    }

    // 완주하지 못한 사람 찾기
    for(auto part : participant) {
        if(participant_map[part] != 0) {
            answer = part;
        }
    }

    return answer;
}