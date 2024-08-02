// 2024.03.19
// 주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int *arr;
    arr = new int[N];
    int isPrime;
    int cnt = 0;

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 2; j < arr[i]; j++) {
            isPrime = 1;
            
            if (arr[i] % j == 0) {
                isPrime = 0;
                break;
            }
            // 2부터 자기자신 전까지 모든 수로 한번씩 나눠볼 때 나누어 떨어지는 수가 있으면 소수가 아니다
        }
        if (arr[i]==2) cnt++;
        if (isPrime == 1) cnt++;
    }

    cout << cnt << '\n';
    return 0;
}
