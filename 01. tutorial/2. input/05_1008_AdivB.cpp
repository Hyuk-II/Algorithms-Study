// 2024.03.12
// 두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.

#include <iostream>
using namespace std;

int main()
{
    double A, B;
    cin >> A >> B;

    cout<<fixed;
    cout.precision(9); // 소수 9번째 자리까지 출력 고정

    cout << A/B << endl;

    return 0;
}
