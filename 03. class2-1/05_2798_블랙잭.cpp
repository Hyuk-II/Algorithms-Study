// 2024.03.20
// N장의 카드에 써져 있는 숫자가 주어졌을 때, M을 넘지 않으면서 M에 최대한
// 가까운 카드 3장의 합을 구해 출력하시오.

#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int *arr;
    arr = new int[N];

    int min = M;
    int save = 0;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                if (arr[i] + arr[j] + arr[k] > M) {
                    continue;
                }

                if ((M - arr[i] - arr[j] - arr[k] < min)) {
                    save = arr[i] + arr[j] + arr[k];
                    min = M - arr[i] - arr[j] - arr[k];
                }
                // 현재 뽑은 3개 카드의 합이 M과의 차이가 가장 적다면, 가장
                // 가까운 수 가장 가까운 수와, 최소값 저장
            }
        }
    }
    // N개의 카드 중에서 3개를 선택하는 모든경우의 수를 확인한다.
    // 배열에 카드를 저장하고, 1개 선택했을 떄 그 뒤에 1개, 그 뒤에 1개 총 3개를
    // 선택한다. 3중 반복문으로 카드를 뽑을 수 있는 모든 경우의 수를 확인한다.

    cout << save << endl;
    delete[] arr;
    return 0;
}
