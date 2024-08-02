// 2024.03.13
// 문자열을 입력으로 주면 문자열의 첫 글자와 마지막 글자를 출력하는 프로그램을 작성하시오.

#include <iostream>
using namespace std;

int main()
{
    int N;
    char str[1001];
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> str;
        for(int i = 0; i < 1000; i++) {
            if (str[i] == NULL) {
                str[1] = str[i-1];
                break;
            }
        }
        cout << str[0] << str[1] << endl;
    }
}
