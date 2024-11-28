// https://school.programmers.co.kr/learn/courses/30/lessons/12944

class Solution {
    public double solution(int[] arr) {
        double sum = 0;

        for(int a : arr) {
            sum += a;
        }

        return sum / arr.length;
    }
}