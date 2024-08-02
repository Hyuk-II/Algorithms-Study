// 2023.03.12
// 0보다 크거나 같은 정수 N이 주어질 때, N!을 출력하는 프로그램을 작성

#include <iostream>
using namespace std;

int main() {
    int N;
    int F = 1;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        F *= i;
    }
    cout << F << endl;

    return 0;
}
