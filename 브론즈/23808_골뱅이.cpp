#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < 2 * N; i++) {
        for (int i = 0; i < N; i++) {
            cout << '@';
        }
        for (int i = 0; i < 3 * N; i++) {
            cout << ' ';
        }
        for (int i = 0; i < N; i++) {
            cout << '@';
        }
        cout << endl;
    }

    for (int i = 0; i < N; i++) {
        for (int i = 0; i < 5 * N; i++) {
            cout << '@';
        }
        cout << '\n';
    }

    for (int i = 0; i < N; i++) {
        for (int i = 0; i < N; i++) {
            cout << '@';
        }
        for (int i = 0; i < 3 * N; i++) {
            cout << ' ';
        }
        for (int i = 0; i < N; i++) {
            cout << '@';
        }
        cout << endl;
    }

    for (int i = 0; i < N; i++) {
        for (int i = 0; i < 5 * N; i++) {
            cout << '@';
        }
        cout << '\n';
    }
}