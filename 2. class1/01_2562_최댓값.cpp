// 2024.03.14
// 첫째 줄에 최댓값을 출력하고, 둘째 줄에 최댓값이 몇 번째 수인지를 출력한다.

#include <iostream>
using namespace std;

int main() {
    int max = 0;
    int max_index = 0;
    int arr[9];

    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 9; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
    }
    cout << max << endl;
    cout << max_index+1 << endl;

    return 0;
}
