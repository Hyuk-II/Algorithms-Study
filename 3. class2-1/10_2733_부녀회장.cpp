// 2024.03.25
// k와 n에 대해 k층에 n호에는 몇 명이 살고 있는지 출력하라. 단, 아파트에는 0층부터 있고 각층에는 1호부터 있으며, 0층의 i호에는 i명이 산다.
// k-1층의 1호부터 n호까지 사는 사람수의 합

#include <iostream>
using namespace std;

int main()
{
    int T, k, n;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> k;
        cin >> n;
        k++;
        int** arr = new int*[k];
        for(int y = 0; y < k; y++) {
            arr[y] = new int[14];
        }

        for(int x = 0; x < 14; x++) {
            arr[0][x] = x+1;
        }

        int tmp = 0;
        for(int y = 1; y < k; y++) {
            for(int x = 0; x < 14; x++) {
                tmp = 0;
                for(int z = 0; z <= x; z++) {
                    tmp += arr[y-1][z];
                }
                arr[y][x] = tmp;
            }
        }

        cout << arr[k-1][n-1] << endl;
        delete[] arr;
    }
}
