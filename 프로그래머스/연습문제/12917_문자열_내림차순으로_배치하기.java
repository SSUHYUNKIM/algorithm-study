//https://school.programmers.co.kr/learn/courses/30/lessons/12917

// Todo: String.toCharArray(), sort(Comparator.reverseOrder()), StringBuilder()

import java.util.*;

class Solution {
    public String solution(String s) {
        List<Character> list = new ArrayList<>();

        for (char c : s.toCharArray()) {
            list.add(c);
        }

        list.sort(Comparator.reverseOrder());

        StringBuilder answer = new StringBuilder();
        for (char c : list) {
            answer.append(c);
        }

        return answer.toString();
    }
}