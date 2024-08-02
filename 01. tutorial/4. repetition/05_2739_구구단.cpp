// 2024.03.12
// N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오.

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= 9; i++) {
        cout << N << " * " << i << " = " << N*i << endl;
    }

    return 0;
}
