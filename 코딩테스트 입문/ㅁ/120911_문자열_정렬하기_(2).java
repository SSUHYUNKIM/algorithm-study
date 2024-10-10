// https://school.programmers.co.kr/learn/courses/30/lessons/120911

import java.util.Arrays;

class Solution {
    public String solution(String my_string) {
        my_string = my_string.toLowerCase();

        char[] charArray = my_string.toCharArray();
        Arrays.sort(charArray);

        return new String(charArray);
    }
}

// 블로그 : toLowerCase()(java), toCharArray()(java)