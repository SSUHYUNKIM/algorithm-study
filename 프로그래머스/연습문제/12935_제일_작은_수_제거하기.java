// https://school.programmers.co.kr/learn/courses/30/lessons/12935

// Todo: Arrays.strea().min().getAsInt(), Arrays.stream().filter().toArray()

import java.util.*;

class Solution {
    public int[] solution(int[] arr) {
        if (arr.length == 1) {
            return new int[]{-1};
        }

        int minValue = Arrays.stream(arr).min().getAsInt();

        return Arrays.stream(arr)
                .filter(num -> num != minValue)
                .toArray();
    }
}