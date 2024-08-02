// 2024.03.13
// 단어 S와 정수 i가 주어졌을 때 S의 i번째 문자 출력

#include <iostream>
using namespace std;

int main() {
    char S[1001];
    int i = 0;
    cin >> S;
    cin >> i;

    cout << S[i-1] << endl;

    return 0;
}
