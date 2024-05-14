// 2024.03.21
// 문제확인

#include <iostream>
#define M 1234567891
using namespace std;

int main()
{
    int L;
    cin >> L;
    int *arr;
    long long r = 1; // 간단히 생각해서 1234567891*31 의 경우 310억 ~> int자료형으로 부족함 
    char c;
    long long hash = 0; // 수의 범위를 최대한 넓히기 위해 long long

    arr = new int[L];
    for (int i = 0; i < L; i++)
    {
        cin >> c;
        arr[i] = c - 96;
    }

    for (int i = 0; i < L; i++)
    {
        hash += (arr[i] * r) % M; // 알파벳의 해시코드가 1234567891보다 커지면 나머지로 변경 
        hash %= M; 
        r *= 31;
        r %= M; // r의 계수가 1234567891보다 커지면 그 나머지로 변경
    }

    cout << hash << "\n";

    delete[] arr;
    return 0;
}
