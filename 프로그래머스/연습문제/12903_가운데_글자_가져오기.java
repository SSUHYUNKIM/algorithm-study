// https://school.programmers.co.kr/learn/courses/30/lessons/12903

// Todo: String.valueOf()
class Solution {
    public String solution(String s) {
        String answer = "";

        int len = s.length();

        if(len % 2 == 1) {
            answer = String.valueOf(s.charAt(len / 2));
        } else {
            answer += s.charAt((len / 2) - 1);
            answer += s.charAt(len / 2);
        }

        return answer;
    }
}