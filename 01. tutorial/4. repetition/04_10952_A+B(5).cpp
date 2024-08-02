// 2024.03.12
// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오. A = B = 0 일 때 까지

#include <iostream>
using namespace std;

int main() {
    int A, B;

    while(true) {
        cin >> A >> B;
        if((A == 0)&&(B == 0)) break;
        cout << A + B << endl;
    } // A, B에 0이 입력됐을 경우에 반복 종료

    return 0;
}
