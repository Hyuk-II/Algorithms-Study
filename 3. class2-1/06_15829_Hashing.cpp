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
    long long r = 1;
    char c;
    long long hash = 0;

    arr = new int[L];
    for (int i = 0; i < L; i++)
    {
        cin >> c;
        arr[i] = c - 96;
    }

    for (int i = 0; i < L; i++)
    {
        hash += (arr[i] * r) % M;
        hash %= M;
        r *= 31;
        r %= M;
    }

    cout << hash << "\n";
    return 0;
}
