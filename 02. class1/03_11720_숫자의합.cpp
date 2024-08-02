// 2024.03.17
// N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.
#include <iostream>
using namespace std;

int main()
{
    int N;
    char num[101];
    int sum = 0;
    cin >> N;
    cin >> num;

    for (int i = 0; i < N; i++) {
        sum += num[i] - '0';
    } // 숫자의 아스키코드 - 0의 아스키 코드 = 숫자 (모든 숫자는 0의 아스키 코드만큼 증가)

    cout << sum << endl;
    return 0;
}
