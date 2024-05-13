// 2024.03.17
// 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제 (우측정렬)

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        for(int j = i; N-j-1 > 0; j++) {
            cout << " ";
        }
        for(int k = 0; k < i+1; k++) {
            cout << "*";
        }
        cout << '\n';
    }
}
