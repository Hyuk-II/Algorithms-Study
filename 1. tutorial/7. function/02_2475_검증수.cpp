// 2024.03.14
// 고유번호의 처음 5자리에는 00000부터 99999까지의 수 중 하나가 주어지며 6번째 자리에는 검증수가 들어간다.
// 검증수는 고유번호의 처음 5자리에 들어가는 5개의 숫자를 각각 제곱한 수의 합을 10으로 나눈 나머지

#include <iostream>
using namespace std;

int compute(int *);

int main() {
    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << compute(arr) << endl;
    return 0;
}

int compute(int* arr) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i]*arr[i];
    }

    return sum%10;
}
