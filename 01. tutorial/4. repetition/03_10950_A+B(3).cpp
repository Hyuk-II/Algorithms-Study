// 2024.03.12
// 첫째 줄에 테스트 케이스의 개수 T가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 있으며,
// 각 줄에 A와 B가 주어진다. 각 테스트 케이스마다 A+B를 출력한다.

#include <iostream>
using namespace std;

int main() {
    int T;
    int A, B;

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> A >> B;
        cout << A + B << endl;
    }

    return 0;
}
