// 2024.03.29
// N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
// 2초
// 퀵정렬로 구현, 피봇 랜덤으로 잡기

#include <iostream>
#include <random>
using namespace std;

void quickSort(int *, int, int);

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;
    int arr[1000000];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    random_device rd;
    mt19937 g(rd());
    shuffle(arr, arr+N, g);
    // 배열 랜덤으로 섞기 -> 시간복잡도 O(nlogn)

    quickSort(arr, 0, N - 1);

    for (int i = 0; i < N; i++) {
        cout << arr[i] << '\n';
    }
}

void quickSort(int *arr, int left, int right) {
    if (left != right) {
        int pivot = arr[left];
        int low = left + 1;
        int high = right;
        int tmp;

        while (low < high) {
            if (arr[low] >= pivot && arr[high] <= pivot) {
                tmp = arr[low];
                arr[low] = arr[high];
                arr[high] = tmp;
            }

            if (arr[low] < pivot) low++;
            if (arr[high] > pivot) high--;
        }

        if(arr[left] > arr[high]) {
            tmp = arr[left];
            arr[left] = arr[high];
            arr[high] = tmp;
        }

        quickSort(arr, left, high-1);
        quickSort(arr, low, right);
    }
}
