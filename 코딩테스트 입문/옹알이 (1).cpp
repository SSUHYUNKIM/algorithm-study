#include <string>
#include <vector>

using namespace std;

vector<string> v = {"aya", "ye", "woo", "ma"};

int solution(vector<string> babbling) {
    int answer = 0;

    for (string bab : babbling) {
        bool valid = true;
        for(int i = 0; i < bab.length(); i++) {
            if(bab.substr(i, 3) == "aya") i += 2;
            else if(bab.substr(i, 2) == "ye") i += 1;
            else if(bab.substr(i, 3) == "woo") i += 2;
            else if(bab.substr(i, 2) == "ma") i += 1;
            else {
                valid = false;
                break;
            }
        }
        if (valid) answer++;
    }

    return answer;
}
