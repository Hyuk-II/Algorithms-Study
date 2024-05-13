// 2024.03.17
// 영어 대소문자와 공백으로 이루어진 문자열이 주어진다.
// 이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오.
// 단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.

#include <iostream>
using namespace std;

int main() {
    char S[1000001];
    int is_word;
    int cnt = 0;
    cin.getline(S, 1000001);
    if(S[0] == ' ') is_word = 0;
    else is_word = 1;
    
    for(int i = 1; S[i]; i++) {
        if(is_word == 1) {
            if(S[i] == ' ') {
                is_word = 0;
                cnt++;
            }
          // 단어는 공백기준으로 분류
        }
        else is_word = 1;
    }
    if(is_word == 1) cnt++;

    cout << cnt << '\n';
    return 0;
}
