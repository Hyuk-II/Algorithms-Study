// 2024.03.26
// N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
// 메모리 초과 다루기 10000이하 인 자연수 최대 천만개

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // cin, cout 시간 줄이기

    int N;
    cin >> N;
    int arr[10001] = {0};
    int num = 0;
    for(int i = 0; i < N; i++) {
        cin >> num;
        arr[num]++;
    }

    for(int i = 0; i < 10001; i++) {
        for(int j = 0; j < arr[i]; j++) {
            cout << i << '\n';
        }
    }
}
