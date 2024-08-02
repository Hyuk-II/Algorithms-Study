// 2024.05.07
// 에라토스테네스의체
// 2(x) 3 4(x) 5 6(x) 7 

#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int* arr = new int[N-1];
    for(int i = 0; i < N-1; i++) {
        arr[i] = i+2;
    }

    for(int i = 0; i < N-1; i++) {
        if (arr[i] == 0) {
            continue;
        }
        K--;
        if(K==0) {
            cout << arr[i] << endl;
            return 0;
        }
        for(int j = i+1; j < N-1; j++) {
            if(arr[j] != 0 && arr[j]%arr[i] == 0) {
                K--;
                if(K == 0) {
                    cout << arr[j] << endl;
                    return 0;
                }
                arr[j] = 0;
            }
        }
    }

    delete[] arr;
}
