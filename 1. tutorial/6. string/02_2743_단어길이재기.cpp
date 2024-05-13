// 2024.03.13
// 알파벳으로만 이루어진 단어를 입력받아, 그 길이를 출력하는 프로그램을 작성하시오.

#include <iostream>
using namespace std;

int main() {
    char str[101];
    cin >> str;

    for(int i = 0; i < 101; i++) {
        if (str[i] == NULL) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
