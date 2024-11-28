// https://school.programmers.co.kr/learn/courses/30/lessons/12906

// Todo: List<> = new ArrayList<>()

import java.util.*;

public class Solution {
    public List<Integer> solution(int[] arr) {
        List<Integer> answer = new ArrayList<>();
        answer.add(arr[0]);

        for(int i = 1; i < arr.length; i++) {
            if(arr[i] != arr[i - 1]) {
                answer.add(arr[i]);
            }
        }

        return answer;
    }
}