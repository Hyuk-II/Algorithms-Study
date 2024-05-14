// 2024.03.26
// N, K 주어지면 NCK

#include <iostream>
using namespace std;

int main() {
    int K, N;
    cin >> N >> K;

    int high = 1;
    int low = 1;
    for(int i = N; i > N-K; i--) {
        high *= i;
    }
    for(int j = K; j >= 1; j--) {
        low *= j;
    }
    
    cout << high/low << endl;
}
