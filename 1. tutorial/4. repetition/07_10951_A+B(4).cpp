// 2024.03.12
// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

#include <iostream>
using namespace std;

int main()
{
    int A, B;

    while (cin >> A >> B){ // 입력값이 있을경우 true
        cout << A + B << endl;
    }

    return 0;
}
