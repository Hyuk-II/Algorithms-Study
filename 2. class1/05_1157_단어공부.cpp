// 2024.03.17
// 알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오.
// 단, 대문자와 소문자를 구분하지 않는다.
// 65~90 -> 대문자, 97~122 -> 소문자

#include <iostream>
using namespace std;

int main()
{
    int alph[26] = {0};
    char str[1000001];
    int max = 0;
    int max_index = 0;
    int is_same = 0;

    cin >> str;

    for(int i = 0; str[i]; i++) {
        if((int)str[i] < 91) { // 92부터 소문자
            alph[(int)str[i] - 65]++;
        } // 주어진 단어가 대문자면 아스키코드-65가 그 알파벳의 개수를 저장한 index
        else alph[(int)str[i] - 97]++;
        // 주어진 단어가 소문자면 아스키코드-97이 그 알파벳의 개수를 저장한 index
    }

    for(int i = 0; i < 26; i++) {
        if (alph[i] == max) {
            if (alph[i] != 0) {
                is_same = 1;
            }
        }

        else if (alph[i] > max) {
            is_same = 0;
            max = alph[i];
            max_index = i;
        }
    }

    if(is_same == 0) {
        cout << (char)(max_index+65) << endl;
    }
    else {
        cout << "?" << endl;
    }
    return 0;
}
