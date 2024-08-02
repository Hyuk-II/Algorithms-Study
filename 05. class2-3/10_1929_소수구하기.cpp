// 2024.05.08
// M부터 N까지 소수 구하기

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int M, N;
    int arr[1000001] = {0};
    cin >> M >> N;

    for(int i = 2; i <= N; i++) {
        arr[i] = i;
    }

    for(int i = 2; i*i <= N; i++) {
        if(arr[i] == 0) {
            continue;
        }
        for(int j = i*i; j <= N; j+=i) {
            arr[j] = 0;
        }
    }

    for(int i = M; i <= N; i++) {
        if(arr[i]!=0) cout << arr[i] << "\n";
    }
}
