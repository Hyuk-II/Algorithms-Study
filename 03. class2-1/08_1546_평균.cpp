// 2024.03.21
// 모든 점수를 점수/최댓값*100으로 고쳤다. 이때의 평균?

#include <iostream>
using namespace std;

int main() {
    int N;
    double* arr;
    cin >> N;
    arr = new double[N];

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    double max = arr[0];
    for(int i = 1; i < N; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    for(int i = 0; i < N; i++) {
        arr[i] = arr[i]/max*100;
    }
    
    double aver = 0;
    for(int i = 0; i < N; i++) {
        aver += arr[i];
    }

    cout << aver/N << endl;
    return 0;
}
