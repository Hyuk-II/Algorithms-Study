// 2024.09.18

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int M, N, K;
        cin >> M >> N >> K;

        int **field;
        field = new int *[N];

        for (int i = 0; i < N; i++) {
            field[i] = new int[M];
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                field[i][j] = 0;
            }
        }

        for (int i = 0; i < K; i++) {
            int x, y;
            cin >> x >> y;

            field[y][x] = 1;
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cout << field[i][j] << " ";
            }
            cout << '\n';
        }

        for (int i = 0; i < N; i++) {
            delete[] field[i];
        }
        delete[] field;
    }
}