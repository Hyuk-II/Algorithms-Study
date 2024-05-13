// 2024.03.13
// N*M크기의 두 행렬 A와 B가 주어졌을 때, 두 행렬을 더하는 프로그램을 작성하시오.

#include <iostream>
using namespace std;

int main()
{
    int A[100][100] = {0};
    int B[100][100] = {0};
    int S[100][100] = {0};

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            S[i][j] = A[i][j] + B[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++) {
            cout << S[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
