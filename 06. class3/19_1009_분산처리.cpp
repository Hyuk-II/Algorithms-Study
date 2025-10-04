#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int a, b;
        cin >> a >> b;
        int sum = 1;
        for (int j = 0; j < b; j++) {
            sum *= a;
            sum %= 10;
        }
        if (sum == 0) {
            cout << 10 << endl;
        } else {
            cout << sum << endl;
        }
    }
}