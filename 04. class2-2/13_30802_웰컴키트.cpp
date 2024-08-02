// 2024.08.02
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int size[6] = {0};

    for (int i = 0; i < 6; i++) {
        cin >> size[i];
    }

    int T, P;
    cin >> T >> P;

    int cnt = 0;

    for (int i = 0; i < 6; i++) {
        if (size[i] % T == 0)
            cnt += size[i] / T;
        else
            cnt += size[i] / T + 1;
    }

    cout << cnt << endl;
    cout << N/P << " " << N%P;

    return 0;
}