// https://school.programmers.co.kr/learn/courses/30/lessons/42748?language=java

import java.util.*;

class Solution {
    public int[] solution(int[] array, int[][] commands) {
        int[] answer = new int[commands.length];

        for(int i = 0; i < commands.length; i++) {
            // Arrays.copyOfRange() - 특정 배열의 원하는 범위만큼 복사하여 새로운 배열을 만드는 메소드 함수
            int[] temp = Arrays.copyOfRange(array, commands[i][0] - 1, commands[i][1]);
            Arrays.sort(temp);
            answer[i] = temp[commands[i][2] - 1];
        }

        return answer;
    }
}