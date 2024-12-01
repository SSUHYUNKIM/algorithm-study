//https://school.programmers.co.kr/learn/courses/30/lessons/12918

// Todo: s.chars(), char().allMach(), Charater::isDigit

class Solution {
    public boolean solution(String s) {
        return (s.length() == 4 || s.length() == 6) && s.chars().allMatch(Character::isDigit);
    }
}