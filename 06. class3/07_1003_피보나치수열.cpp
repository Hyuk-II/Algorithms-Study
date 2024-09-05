// 2024.09.04

#include <iostream>
using namespace std;

int fibo[50] = {
    0,
    1,
};

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return fibo[n];
    } else if (fibo[n] == 0) {
        fibo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    }

    return fibo[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int n;
    for (int i = 0; i < N; i++) {
        cin >> n;

        if (n == 0) {
            cout << "1 0" << '\n';
        } else {
            cout << fibonacci(n - 1) << " " << fibonacci(n) << '\n';
        }
    }
}