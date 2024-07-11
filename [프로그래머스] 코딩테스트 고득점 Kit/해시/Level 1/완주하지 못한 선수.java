// https://school.programmers.co.kr/learn/courses/30/lessons/42576?language=cpp

import java.util.*;
import java.io.*;

class Solution {
    public String solution(String[] participant, String[] completion) {
        String answer = "";
        HashMap<String, Integer> hashMap = new HashMap<String, Integer>();

        // 참가자 명단을 해시맵에 추가
        for(String part : participant) {
            hashMap.put(part, hashMap.getOrDefault(part, 0) + 1);
        }

        // 완주한 사람의 이름을 해시맵에서 감소
        for(String com : completion) {
            hashMap.put(com, hashMap.get(com) - 1);
        }

        // 완주하지 못한 사람 찾기
        for(String hash : hashMap.keySet()) {
            if(hashMap.get(hash) == 1) {
                answer = hash;
            }
        }

        return answer;
    }
}

