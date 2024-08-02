#include <iostream>
using namespace std;

long long int combination(int, int);

int main() {
    int T, N, M;
    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> N >> M;
        cout << combination(N,M) << endl;
    }
}

long long int combination(int N, int M) {
    if(N == M) return 1;
    if(N > M-N) N = M-N;

    long long int ret = 1;
    for(int i = 1; i <= N; i++) {
        ret *= M-i+1;
        ret /= i;
    }

    return ret;
}