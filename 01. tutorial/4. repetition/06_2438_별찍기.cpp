// 2024.03.12
// 첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
