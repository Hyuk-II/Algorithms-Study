// 2024.03.13
// 영어 소문자와 대문자로 이루어진 단어를 입력받은 뒤, 대문자는 소문자로, 소문자는 대문자로 바꾸어 출력하는 프로그램을 작성하시오.
// 65~90 -> 대문자, 97~122 -> 소문자

#include <iostream>
using namespace std;

int main() {
    char str[101];
    cin >> str;

    for (int i = 0; str[i] != NULL; i++) {
        if(((int)str[i]>=65)&&((int)str[i]<=90)) {
            str[i] = (int)str[i]+32;
        } // 대문자+32 = 소문자
        else if(((int)str[i]>=97)&&((int)str[i]<=122)) {
            str[i] = (int)str[i]-32;
        } // 소문자-32 = 대문자
    }

    for (int i = 0; str[i] != NULL; i++) {
        cout << str[i];
    }
    cout << endl;

    return 0;
}
