// 2024.03.12
// 총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램을 작성하시오.

#include <iostream>
using namespace std;

int main() {
    int N,V;
    int* arr;
    int cnt = 0;
    cin >> N;
    arr = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    cin >> V;
    for (int i = 0; i < N; i++) {
        if(arr[i] == V) {
            cnt++;
        }
    }

    cout << cnt << endl;

    delete(arr);
    return 0;
}
