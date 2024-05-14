// 2024.04.08
// N개의 정수 A[1], A[2], …, A[N]이 주어져 있을 때, 이 안에 X라는 정수가 존재하는지 알아내는 프로그램을 작성하시오.

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    cin >> N;
    int* arr1 = new int[N];
    for(int i = 0; i < N; i++) {
        cin >> arr1[i];
    }
    sort(arr1, arr1+N);

    cin >> M;
    int* arr2 = new int[M];
    for(int i = 0; i < M; i++) {
        cin >> arr2[i];
    }

    int is_in = 0;
    for(int i = 0; i < M; i++) {
        is_in = binary_search(arr1,arr1+N,arr2[i]);
        cout << is_in << "\n";
    }

    delete[] arr1;
    delete[] arr2;
}
